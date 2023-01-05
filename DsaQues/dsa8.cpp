//Multiply two numbers represented by linked lists
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

int  Multiply(node* head,node* head1){

    int var=0;
    int num1=0 ,num2=0;

    while(head!=NULL || head1!=NULL){

        if(head!=NULL){
            num1 = ((num1)*10) + head->data;
            head=head->next;
        }

         if(head1!=NULL){
            num2 = ((num2)*10) + head1->data;
            head1=head1->next;
        }
    }
    return (num1*num2);

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

    cout<<Multiply(head,head1)<<endl;
    
    return 0;
}