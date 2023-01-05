//Delete without head node
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

    node* n =new node(val);
    node* temp =head;

    if(head==NULL){
        head=n;
        return;
    }

    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next=n;
}

void deletewithoutHeadNode(node* &pos){

    if(pos==NULL){
        return;            // If linked list is empty
    }
    if(pos->next==NULL){
        printf("This is last node, require head, can't be freed\n");
        return;
    }
    node* temp=pos->next;
    
    pos->data=pos->next->data;   // Copy data of the next node to current node
    pos->next=pos->next->next;     // Perform conventional deletion
    delete(temp);
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

    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,2);
    insertAtTail(head,7);
    insertAtTail(head,9);
    
     cout << "Initial Linked List: \n";
    display(head);

    node* Delete =head->next;
    deletewithoutHeadNode(Delete);
    cout << "Final Linked List after deletion :\n";
    display(head);

    return 0;
}