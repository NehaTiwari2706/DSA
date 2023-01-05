//DELETE A NODE IN LINKED LIST
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

void deleteAtHead(node* &head){
    
    node* todelete=head;
    if(head->next==NULL){
        delete todelete;
        return;
    }
    head=head->next;
    delete todelete;
}

void deletion(node* &head,int pos){
    
    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node* temp=head;
    int count=1;

    while(temp->next!=NULL && count<pos){
        temp=temp->next;
        count++;
    }
    node* todelete;
    todelete=temp->next;
    
    temp=temp->next->next;
    delete todelete;
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
    
    deletion(head,3);
    display(head);

    deleteAtHead(head);
    display(head);

    return 0;
}