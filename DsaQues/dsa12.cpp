//Detect and remove loop in a linked list
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

void loop(node* &head,int k){
    
    node* temp=head;
    node* temp1=head;

    if(head==NULL){
        return;
    }
    int count=0;
    while( k!=count && temp->next!=NULL){
          temp=temp->next;
          count++;
    }

    while( temp1->next!=NULL){
          temp1=temp1->next;
    }
    temp1->next= temp;

}

void removeloop(node* &head,node* &slow){

    node* ptr1=slow;
    node* ptr2=slow;

    // Count the number of nodes in loop
    int count=1;
    while(ptr1->next!=ptr2){
        ptr1=ptr1->next;
        count++;
    }

    // Fix one pointer to head
    ptr1 = head;
 
    // And the other pointer to k nodes after head
    ptr2 = head;
    for (int i = 0; i < count; i++)
        ptr2 = ptr2->next;
 
    /*  Move both pointers at the same pace,
      they will meet at loop starting node */
    while (ptr2 != ptr1) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
 
    // Get pointer to the last node
    while (ptr2->next != ptr1)
        ptr2 = ptr2->next;
 
    /* Set the next node of the loop ending node
      to fix the loop */
    ptr2->next = NULL;
}

bool detectloop(node* &head){

    if(head==NULL){
        return 0;
    }

    node* slow=head;
    node* fast=head;

    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    
        if(slow==fast){
        removeloop(head,slow);
        
        return true;
        }
    }    
        return false;
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

    node* head=NULL;
    insertAtTail(head,18);
    insertAtTail(head,04);
    insertAtTail(head,02);
    insertAtTail(head,15);
    insertAtTail(head,11);
    insertAtTail(head,21);
    display(head);
    
    loop(head,4);


    if(detectloop(head)){
        cout<<"loop exists"<<endl;
    }else{
        cout<<"loop does not exists"<<endl;
    }

    return 0;
}