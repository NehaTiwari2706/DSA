//Circular Queue Implementation Using Linked List
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
    if(rear==NULL){
        front =rear =newnode;
        rear->next=front;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}

void dequeue(){
    
    node* temp=front;

    if(rear==NULL && front==NULL){
        cout<<"Queue is empty"<<endl;
    }
    else if(front==rear){
        front = rear =NULL;

        delete temp;
    }
    else{
        front=front->next;
        rear->next=front;

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
        while(temp->next!=front){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data<<"->";
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
    display();
    peek();

    return 0;
}
