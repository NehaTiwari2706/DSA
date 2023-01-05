//IMPLEMENTATION OF STACK USING LINKED LIST
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

node* top=NULL;

void push(int val){
    node* n=new node(val);
    n->data=val;
    n->next=top;
    top=n;
}

void display(){

    node* temp=top;
    if(top==NULL){
        cout<<"Underflow Condition"<<endl;
    }

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void Top(){
    if(top==NULL){
        cout<<"Stack is empty"<<endl;
    }
    cout<<top->data<<endl;
}

void pop(){

   node* temp=top;
   if(top==NULL){
       cout<<"Underflow condition"<<endl;
   }
   cout<<temp->data;
   temp=temp->next;

   delete temp;
}

int main(){

    push(2);
    push(3);
    push(10);
    display();
    cout<<endl;
    Top();
    cout<<endl;
    pop();



    return 0;
}
