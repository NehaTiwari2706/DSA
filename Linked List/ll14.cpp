// SWAP NODES IN PAIN LINKED LIST
#include<iostream>
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
          cout<<temp->data<<" -> ";
          temp=temp->next;
      }
      cout<<"NULL"<<endl;
}

void swappair(node* &head){

    node* temp=head;

    while(temp!=NULL && temp->next!=NULL){
        swap(temp->data,temp->next->data);
        temp=temp->next->next;
    }
    
}

int main(){

    node* head=NULL;

    int array[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        insertAtTail(head,array[i]);
    }
    display(head);

    swappair(head);
    display(head);

    return 0;
}
