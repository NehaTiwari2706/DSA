//Linked List Cycle
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

void insertAtTail(node* &head,int val){

    node* temp=head;
    node* n= new node(val);

    if(temp == NULL){
        head=n;
        return;
    }
    while(temp->next != NULL){
          temp=temp->next;
    }
    temp->next=n;
}

node* Cyclell(node* &head){
    
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;

    return temp;
}

bool detectcycle(node* &head){

    node* Head=NULL;
    node* tail=NULL;

    while(Head!=NULL && tail!=NULL && tail->next!=NULL){
        Head=Head->next;
        tail=tail->next->next;
    }
    if(Head==tail){
        return true;
    }

    return false;
}

void Display(node* head){

    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
     
    node* head=NULL;
    
    insertAtTail(head,12);
    insertAtTail(head,13);
    insertAtTail(head,14);
    insertAtTail(head,15);
    insertAtTail(head,16);
    insertAtTail(head,17);
    Display(head);
    
    node* Newnode= Cyclell(head);
    //Display(Newnode);
    if(detectcycle(Newnode))
        cout<<"Cycle exists in the linked list"<<endl;
    else
        cout<<"Cycle does not exists in the linked list"<<endl;
      

    return 0;
}