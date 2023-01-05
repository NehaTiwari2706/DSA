//Subtract two numbers representated as Linked List
//Sum of TWO LINKED LISTS
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

void display(node* head){

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head1=NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,4);
    insertAtTail(head1,5);

    node* head2=NULL;
    insertAtTail(head2,1);
    insertAtTail(head2,3);
    
    cout<<"Given Linked Lists are:- "<<endl;
    display(head1);
    display(head2);

    node* result=SubtractLinkedList(head1,head2);
    display(result);

    return 0;
}