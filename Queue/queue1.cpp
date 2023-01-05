//Implementation of Queue using Linked List
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

    node* front=NULL;
    node* rear=NULL;

void enqueue(int n){

    node* newnode=new node(n);

    newnode->data=n;
    newnode->next=NULL;

    if(rear== NULL && front==NULL){
       front = rear = newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue(){

    node* temp=front;
    if(rear==NULL && front==NULL){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<front->data<<endl;
        front=front->next;

        delete temp;
    }
}

void peek(){
   
    if(rear==NULL && front==NULL){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<front->data<<endl;
    }
}

void display(){

    if(rear==NULL && front==NULL){
        cout<<"Queue is empty"<<endl;
    }
    else{
        node* temp=front;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
}

int main(){

    enqueue(2);
    enqueue(5);
    enqueue(-3);
    enqueue(9);
    display();
    dequeue();
    peek();
    display();

    return 0;
}