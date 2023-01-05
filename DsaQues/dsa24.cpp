//Merge sort for Linked List
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

node* MergeSort(node* &head1,node* &head2){

    node* p1=head1;
    node* p2=head2;
    node* DummyNode= new node(-1);
    node* p3=DummyNode;

    while(p1!=NULL && p2!=NULL){
        if(p1->data < p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
            p3=p3->next;
    }

    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

    while(p2!=NULL){
          p3->next=p2;
          p2=p2->next;
          p3=p3->next;
    }
    p3->next=NULL;

    return DummyNode->next;
}

node* MergeSortrecursively(node* &head1,node* &head2){

    if(head1==NULL){
        return head2;
    }

    if(head2==NULL){
        return head1;
    }

    if(head1->data < head2->data){
        head1->next=MergeSort(head1->next,head2);
        return head1;
    }
    else
    {
        head2->next=MergeSort(head1,head2->next);
        return head2;
    }
}

int main(){
    
    node* head1=NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,4);
    insertAtTail(head1,5);

    node* head2=NULL;
    insertAtTail(head2,1);
    insertAtTail(head2,3);
    insertAtTail(head2,6);
    
    cout<<"Given Linked Lists are:- "<<endl;
    display(head1);
    display(head2);

    cout<<"Resultant Linked List :-"<<endl;
    node* Newnode=MergeSort(head1,head2);
    display(Newnode);
    
    node* rec=MergeSortrecursively(head1,head2);
    display(rec);

    return 0;
}
