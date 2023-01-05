//REVERSING K NODES IN A LINKED LIST
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

node* reversek(node* &head,int k){

    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    int count=0;

    while(currptr != NULL && count < k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;                //by iterative method reversing the 1st two nodes
        currptr=nextptr;
        count++;
    }
    if(nextptr != NULL){
        head->next =reversek(nextptr,k);    //recursive call
    }
    return prevptr;
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

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);

    display(head);
    
    node* newhead=reversek(head,2);
    display(newhead);

    return 0;
}