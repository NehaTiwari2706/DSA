//Reverse Linked List
#include"bits/stdc++.h"
using namespace std;

class node{

    public:
      int data;
      node* next;

      node(int val){
          data = val;
          next = NULL;
      }
};

void insertAtTail(node* &head,int val ){
      node* n= new node(val);
      node* temp =head;
      
      if(head==NULL){
          head=n;
          return;
      }

      while(temp->next!=NULL){
          temp=temp->next;
      }
      temp->next=n;
}

node* reversell(node* &head ){

    node* prevptr =NULL;
    node* currptr =head;
    node* nextptr =head;

    while(currptr!=NULL){

        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

void display(node* head){
    
    node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

   node* head=NULL;
   
   insertAtTail(head,1);
   insertAtTail(head,3);
   insertAtTail(head,5);
   insertAtTail(head,7);
   display(head);
   
   node* NewNode=reversell(head);
   display(NewNode);
   
    return 0;
}