//Reorder list
/*
You are given the head of a singly linked-list. The list can be represented as:
A0 A1 A2 A3 A4......An-1,An.

Reorder the list to be on the following form:
A0 An A1 An-1 A2 An-2 A3 An-3.....

#You may not modify the values in the list's nodes. Only nodes themselves may be changed.
*/

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

// Function to reverse the linked list
node* reverselist(node* &head)
{
	// Initialize prev and current pointers
	node *prev = NULL, *curr = head, *next=NULL;

	while (curr) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

void reorderList(node* &head) {

    node* slow = head;
    node* fast = head;

	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
	}
	fast= reverselist(slow->next);
	slow->next = NULL;
    slow = head;

    node* temp1;
    node* temp2;
	while (fast!=NULL){

           temp1=slow->next;
           temp2=fast->next;
           slow->next=fast;
           fast->next=temp1;
           slow=temp1;
           fast=temp2;

    }
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
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    
    display(head);

    reorderList(head);
    display(head);

    return 0;

}