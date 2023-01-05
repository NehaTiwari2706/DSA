//Sort a linked list of 0s, 1s and 2s
    /*Following steps can be used to sort the given linked list. 
 

Traverse the list and count the number of 0s, 1s, and 2s. Let the counts be n1, n2, and n3 respectively.
Traverse the list again, fill the first n1 nodes with 0, then n2 nodes with 1, and finally n3 nodes with 2.
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

void sortlist(node* &head){

    int count[3]={0,0,0};   //initialize count of '0' '1' and '2' 
    node* ptr = head;
    
     /* count total number of '0', '1' and '2'
    * count[0] will store total number of '0's
    * count[1] will store total number of '1's
    * count[2] will store total number of '2's */

   while(ptr!=NULL){

       count[ptr->data]+=1;
       ptr=ptr->next;
   }

   int i=0;
   ptr=head;

    /* Let say count[0] = n1, count[1] = n2 and count[2] = n3
    * now start traversing list from head node,
    * 1) fill the list with 0, till n1 > 0
    * 2) fill the list with 1, till n2 > 0
    * 3) fill the list with 2, till n3 > 0 */

   while(ptr!=NULL){
       if(count[i]==0){
            ++i;
       }
       else{
           ptr->data=i;
           --count[i];
           ptr=ptr->next;
       }
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
    insertAtTail(head,2);
    insertAtTail(head,2);
    insertAtTail(head,1);
    insertAtTail(head,0);
    insertAtTail(head,1);
    insertAtTail(head,2);

    cout << "Initial Linked List: \n";
    display(head);
    
    sortlist(head);
    cout << "Final Linked List after sorting :\n";
    display(head);

    return 0;
}