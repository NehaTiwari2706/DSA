//QuickSort on Singly Linked List

/*
 The important things about implementation are, it changes pointers rather swapping data and time complexity is same as the implementation for Doubly Linked List. 

 In partition(), we consider last element as pivot. We traverse through the current list and if a node has value greater than pivot, we move it after tail. If the node has smaller value, we keep it at its current position. 

In QuickSortRecur(), we first call partition() which places pivot at correct position and returns pivot. After pivot is placed at correct position, we find tail node of left side (list before pivot) and recur for left list. Finally, we recur for right list.
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

void display(node* head){

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* Partition(node* &head,node* &end,node* &newHead,node* &newEnd){

    node* pivot=end;
    node* prev=NULL;
    node* curr=head;
    node* tail=pivot;

    while(curr!=pivot){
        if(curr->data < pivot->data){
            if(newHead==NULL){
                newHead=curr;
            }
            prev=curr;
            curr=curr->next;
        }
        else{
            if(prev==NULL){
                prev->next=curr->next;
            }

            node* temp=curr->next;
            curr->next=NULL;
            tail->next=curr;
            tail=curr;
            curr=temp;
        }
    }

    if(newHead==NULL){
        newHead=pivot;
    }
    newEnd=tail;

    return pivot;
}

node* GetEnd(node* &head){

    node* tail=head;
    while(tail!=NULL && tail->next!=NULL){
        tail=tail->next;
    }
    return tail;
}

node* QSrecurssive(node* head,node* end){

     if(head==NULL || head==end){
         return head;
    }

    node* newHead=NULL;
    node* NewEnd=NULL;
    
    node* Pivot= Partition(head,end,newHead,NewEnd);

    if(newHead!=Pivot){
        node* temp=newHead;

        while(temp->next!=Pivot){
            temp=temp->next;
        }
        temp->next=NULL;

        newHead=QSrecurssive(newHead,temp);  //left
        
        temp=GetEnd(newHead);
        temp->next=Pivot;
    }

    Pivot->next=QSrecurssive(Pivot->next,NewEnd); //right

    return newHead;
}

node* QuickSort(node* &head){
    
    return QSrecurssive(head,GetEnd(head));
    
}

int main(){

    node* head=NULL;

    insertAtTail(head,8);
    insertAtTail(head,2);
    insertAtTail(head,9);
    insertAtTail(head,23);
    insertAtTail(head,18);
    insertAtTail(head,4);
    
    cout << "Linked List before sorting :\n";
    display(head);
    cout << "Linked List after sorting :\n";


    node* newHead=QuickSort(head);
    display(newHead);
    
    return 0;
}