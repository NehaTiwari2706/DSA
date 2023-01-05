//Segregate even and odd nodes in a Linked List

 /*The idea is to get pointer to the last node of list. And then traverse the list starting
  from the head node and move the odd valued nodes from their current position to end of the list.*/

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

void segregateList(node* &head){

    node* end=head;
    node* curr=head;
    node* prev=NULL;

    while(end->next!=NULL){
        end=end->next;
    }
    node* new_end=end;

    while( (curr->data % 2) != 0 && curr!=end){
        new_end->next=curr;
        curr=curr->next;
        new_end->next->next=NULL;
        new_end=new_end->next;
    }

    if((curr->data % 2 )== 0){
        head=curr;

        while (curr!=end)
        {
            if(curr->data % 2 == 0){
                prev=curr;
                curr=curr->next;
            }
            else
            {
                prev->next=curr->next;
                curr->next=NULL;
                new_end->next=curr;
                new_end=curr;
                curr=prev->next;
            } 
        } 
    }
    else
        prev=curr;
    
    if (new_end!=end && (end->data % 2) != 0)
    {
        prev->next=end->next;
        end->next=NULL;
        new_end->next=end;
    }
    return;
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
    insertAtTail(head,1);
    insertAtTail(head,4);
    insertAtTail(head,2);
    insertAtTail(head,20);
    insertAtTail(head,5);
    insertAtTail(head,22);
    
    cout<<"Given linked list :"<<endl;
    display(head);
    
    segregateList(head);

    cout<<"Modified Linked list :"<<endl;
    display(head);

    return 0;
}