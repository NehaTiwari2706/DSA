/* FLATTEN a LINKED LIST WITH NEXT AND CHILD POINTERS
              OR 
    Flatten a multilevel linked list
*/
#include"bits/stdc++.h"
using namespace std;

#define size(arr)  (sizeof(arr))/(sizeof(arr[0]))

class node{

    public:
    int data;
    node* next;
    node* child;

};

node* createlist(int *arr,int n){

     node* head=NULL;
     node* p=NULL;
     
     int i;
     for( i=0;i<n;i++){

         if(head==NULL){
             head=p=new node();
         }
         else{
             p->next=new node();
             p=p->next;
         }
         p->data=arr[i];
         p->next=p->child=NULL;
     }
     return head;
}

node* createlist(void){

    int arr1[] = {10, 5, 12, 7, 11};
    int arr2[] = {4, 20, 13};
    int arr3[] = {17, 6};
    int arr4[] = {9, 8};
    int arr5[] = {19, 15};
    int arr6[] = {2};
    int arr7[] = {16};
    int arr8[] = {3};

    node* head1 = createlist(arr1,size(arr1));
    node* head2 = createlist(arr2,size(arr2));
    node* head3 = createlist(arr3,size(arr3));
    node* head4 = createlist(arr4,size(arr4));
    node* head5 = createlist(arr5,size(arr5));
    node* head6 = createlist(arr6,size(arr6));
    node* head7 = createlist(arr7,size(arr7));
    node* head8 = createlist(arr8,size(arr8));
  
    head1->child= head2;
    head1->next->next->next->child=head3;
    head3->child=head4;
    head4->child=head5;
    head2->next->child=head6;
    head2->next->next->child=head7;
    head7->child=head8;

    return head1;
}

void flattenList(node* &head){

    if(head==NULL){
        return;           /*Base case*/
    }
    node* temp=NULL;
    node* tail=head;
    /* Find tail node of first level linked list */
    while(tail->next!=NULL){
        tail=tail->next;
    }
     /*  One by one traverse through all nodes of first level
        linked list till we reach the tail node  */
    node* curr=head;
    while(curr!=tail){
        // If current node has a child
       if(curr->child){
            // then append the child at the end of current list
           tail->next=curr->child;
           
           temp=curr->child;
           // and update the tail to new last node
           while(temp->next){
               temp=temp->next;
           }
           tail=temp;
       }
        // and update the tail to new last node
        curr=curr->next;
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

int main(void){
    
    node* head = NULL;
    head= createlist();
    flattenList(head);
    display(head);

    return 0; 
}