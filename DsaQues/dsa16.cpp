//REVERSE A DOUBLY LINKED LIST

#include"bits/stdc++.h"
using namespace std;

class node{

   public:
   int data;
   node* next;
   node* prev;

   node(int val){
       data=val;
       next=NULL;
       prev=NULL;
   }
};

void insertAthead(node* &head,int val){

    node* n=new node(val);
    n->next=head;
    if (head!=NULL)
    {
       head->prev=n;
    }
    head=n;
}

void insertattail(node* &head,int val){
    
    if(head==NULL){
        insertAthead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp= head;
    while(temp->next!=NULL ){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void reverse(node* &head){

    if(head==NULL){
        return;
    }
    node* temp=NULL;
    node* curr=head;
    while(curr!=NULL){
         
         temp=curr->prev;
         curr->prev=curr->next;
         curr->next=temp;
         curr=curr->prev;
    }

    if(temp!=NULL){
        head=temp->prev;
    }
}

void display(node* head){

    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head=NULL;
    insertattail(head,18);
    insertAthead(head,27);
    insertattail(head,02);
    insertattail(head,04);
    insertattail(head,06);
    insertattail(head,20);
    cout<<"Given linked List is:"<<endl;
    display(head);
    
    reverse(head);
    cout<<"Reverse linked list is:"<<endl;
    display(head);

    return 0;
}