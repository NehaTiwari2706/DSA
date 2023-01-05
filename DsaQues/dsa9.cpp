//Remove nth node from end of list
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
     int count=1;

     if(head==NULL){
         head=n;
         return;
     } 

     while(temp->next!=NULL){
         temp=temp->next;
         count++;
     }
     temp->next=n;
    
}

int count(node* &head){
     
    node* temp=head; 
    int count=0; 
    if(head==NULL){
        return 0;
    }

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void Remove_nth_node_from_end(node* &head,int n){
    
    node* temp=head;
    int c=count(head);
    int i=1;
    while(i!=c-n){
       temp=temp->next;
        i++;
    }
    node* del=temp->next;
    temp->next=temp->next->next;
    delete(del);
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
    insertAtTail(head,6);
    insertAtTail(head,9);
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,3);
    display(head);
    
    Remove_nth_node_from_end(head,2);
    display(head);

    return 0;
}