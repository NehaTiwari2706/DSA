//Remove Duplicates from unsorted linked list

 /*METHOD (Using two loops) 
This is the simple way where two loops are used. Outer loop is used to pick the elements one by one and the inner loop compares the picked element with the rest of the elements
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

void Removeduplicate(node* &head){
    
    node *ptr1 ,*ptr2 ,*dup;
    ptr1=head;
     /* Pick elements one by one */
    while(ptr1!=NULL && ptr1->next!=NULL){
           ptr2=ptr1;
           /* Compare the picked element with rest of the elements */
           while(ptr2->next!=NULL){
                /* If duplicate then delete it */
               if(ptr1->data == ptr2->next->data){
                   dup=ptr2->next;
                   ptr2->next=ptr2->next->next;
                   delete(dup);
               }
               else{
                   ptr2=ptr2->next;
               }
           }
           ptr1=ptr1->next;
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
    insertAtTail(head,9);
    insertAtTail(head,2);
    insertAtTail(head,7);
    insertAtTail(head,2);
    insertAtTail(head,1);
    insertAtTail(head,9);

    cout << "Initial Linked List: \n";
    display(head);

    Removeduplicate(head);
    cout << "Final Linked List after deletion :\n";
    display(head);

    return 0;
}