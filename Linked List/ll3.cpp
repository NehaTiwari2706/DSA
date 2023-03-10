//REVERSING A LINKED LIST using recursive method
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

    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void reverseprint(node* &p){

    if(p==NULL){
        return;   //base case
    }

    reverseprint(p->next);
    cout<< p->data <<" -> ";

}

void display(node* head){

    node* temp=head;
    while(temp != NULL){
        cout<< temp->data <<" -> ";
        temp=temp->next; 
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head=NULL;

    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,1);
    insertAtTail(head,7);
    display(head);
    
    reverseprint(head);
    cout<<"NULL"<<endl;

    return 0;
}