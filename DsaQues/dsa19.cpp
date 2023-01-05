//Point to next higher value node in a linked list with an arbitrary pointer
            /*
            An Efficient Solution works in O(nLogn) time. The idea is to use Merge Sort for linked list. 
1) Traverse input list and copy next pointer to arbit pointer for every node. 
2) Do Merge Sort for the linked list formed by arbit pointers.

MergeSort(headRef)
1) If the head is NULL or there is only one element in the Linked List 
    then return.
2) Else divide the linked list into two halves.  
      FrontBackSplit(head, &a, &b); /* a and b are two halves
       
3) Sort the two halves a and b.
      MergeSort(a);
      MergeSort(b);
4) Merge the sorted a and b (using SortedMerge() ) 
   and update the head pointer using headRef.
     *headRef = SortedMerge(a, b)
            */

#include"bits/stdc++.h"
using namespace std;

class node{

    public:
    int data;
    node* next;
    node* arbit;

    node(int val){
        data=val;
        next=NULL;
        arbit=NULL;
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
     n->arbit=NULL;
}

void display(node* head ){

    cout<<"Traversal using next Pointer: "<<endl;
    while(head!=NULL){
        cout<<head->data<<"<-";
        head=head->next;
    }cout<<"NULL"<<endl;
}    
    

void display1(node* Ahead){
    cout<<"Traversal using arbitary Pointer: "<<endl;
     while(Ahead!=NULL){
        cout<<Ahead->data<<"<-";
        Ahead=Ahead->next;
    }cout<<"NULL"<<endl;
}

node* mergesort(node* &head1,node* &head2){

    if(!head1)
           return head2;

    if(!head2)
           return head1;

     if(head1->data < head2->data)
     {
         head1->next=mergesort(head1->next,head2);
         return head1;y
     }    
     else
     {
         head2->next=mergesort(head1,head2->next);
         return head2;
     }
}
      
node* populateArbit(node* &head){
    
    if(head==NULL || head->next==NULL){
        return head;                     //base case ,empty or single node present
    }
    node* temp=head;
    while(temp!=NULL){
        temp->arbit=temp->next;
        temp=temp->next;
    }
    
    node* curr=head->next;
    node* p=head;
    while(curr!=NULL){
    if(p->data < curr->data)
        break;
       curr=curr->next; 
    }

    if(curr==NULL)
        return head;

    p=curr; 
    curr=curr->next;
    p->next=NULL;

    return mergesort(head,curr);
}

int main(){
    
    node* head=NULL;
    insertAtTail(head,5);
    insertAtTail(head,10);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);

    node* Ahead=populateArbit(head);

    display(Ahead);

    return 0;
}    