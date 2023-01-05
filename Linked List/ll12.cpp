//MIDDLE OF THE LINKED LIST
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

int length(node* &head){

    node* temp=head;
    int l=0;
    while(temp!=NULL){
        temp=temp->next;
          l++;
    }
    return l;
}

node* middle(node* &head){

    node* temp=head;
    node* newhead;
    int count=0;
    int l= length(head);
    int k= l/2;

    while(temp->next!=NULL && count<k){

        temp=temp->next;
        count++;
    }

    newhead=temp;

    return newhead;

}

void display(node* head){

      node* temp=head;
      while(temp!=NULL){
          cout<<temp->data<<" -> ";
          temp=temp->next;
      }
      cout<<"NULL"<<endl;
}


int main(){
    
     node* head=NULL;

    int array[]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<9;i++){
        insertAtTail(head,array[i]);
    }
    display(head);
    
    node* n=middle(head);
    display(n);

    return 0;
}
