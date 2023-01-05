//Delete nodes which have a greater value on right side
#include"bits/stdc++.h"
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val){
     
     node* n=new node(val);
     node* temp=head;

     if(head==NULL){
         head=n;
         return;
     } 

     while(temp->next!=NULL){
         temp=temp->next;
     }
     temp->next=n;
    
}

void reverseList(node* &head){

    node* temp;
    node* curr=head;
    node* prev=NULL;

    while(curr!=NULL){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    head=prev;
}

void deletelesserNodes(node* &head){
     
     reverseList(head);

     node* curr=head;
     node* maxnode=head;
     node* temp;

     while (curr!=NULL && curr->next!=NULL)
     {
         if(curr->next->data < maxnode->data)
         {
             temp=curr->next;
             curr->next=temp->next;
             delete(temp);
         }
         else
         {
             curr=curr->next;
             maxnode=curr;
         }
     } 

     reverseList(head);

}

void display(node* head){

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    node* head=NULL;
    insertAtTail(head,12);
    insertAtTail(head,15);
    insertAtTail(head,10);
    insertAtTail(head,11);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,2);
    insertAtTail(head,3);

    cout<<"Given linked list \n";
    display(head);
    cout<<endl;
    deletelesserNodes(head);
    cout<<"linked list after deletion \n";
    display(head);
    

    return 0 ;
}