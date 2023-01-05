// Merge Two Sorted Lists
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

    node* n =new node(val);
    node* temp =head;

    if(head==NULL){
        head=n;
        return;
    }

    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next=n;
}

node* merge(node* head,node* head1){
    
    node* temp=head;
    node* temp1=head1;
    node* dummyNode =new node(-1);
    node* temp2=dummyNode;
   
    while(temp!=NULL && temp1!=NULL){
       if(temp->data<temp1->data){
           temp2->next=temp;
           temp=temp->next;
       }
       else{
           temp2->next=temp1;
           temp1=temp1->next;
       }
       temp2=temp2->next;
    }

    while(temp!=NULL){
        temp2->next=temp;
           temp=temp->next;
       temp2=temp2->next;
    }

    while(temp1!=NULL){
         temp2->next=temp1;
           temp1=temp1->next;
       temp2=temp2->next;
    }
    temp2->next=NULL;

    return dummyNode->next;
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
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);

    node* head1=NULL;
    insertAtTail(head1,2);
    insertAtTail(head1,7);
    insertAtTail(head1,9);
    display(head1);
    
    node* New = merge(head,head1);
    display(New);
    
    return 0;
}