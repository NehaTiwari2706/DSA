//Flatten a Linked List
#include"bits/stdc++.h"
using namespace std;

class node{

    public:
    int data;
    node* next;
    node* down;
};

node* head=NULL;

node* insert(node* &head,int data){

    node* n= new node();
    n->data=data;
    n->next=NULL;
    n->down=head;
    head=n;

    return head;
}

void Display(){

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* merge(node* a,node* b){

    if(a==NULL){
        return b;
    }

    if(b==NULL){
        return a;
    }

    node* result;

    if(a->data < b->data){
        result=a;
        result->down = merge(a->down,b);
    }
    else{
        result=b;
        result->down = merge(a,b->down);
    }
    result->next =NULL;

    return result;
}

node* Flatten(node* root){

    if(root==NULL || root->next==NULL){
        return root;
    }
    root->next = Flatten(root->next);
    root=merge(root,root->next);

    return root;
}

int main(){

     /* Let us create the following linked list
        5 -> 10 -> 19 -> 28
        |    |     |     |
        V    V     V     V
        7    20    22    35
        |          |     |
        V          V     V
        8          50    40
        |                |
        V                V
        30               45
    */

    head = insert(head,30);
    head = insert(head,8);
    head = insert(head,7);
    head = insert(head,5);

    head->next = insert(head->next,20);
    head->next = insert(head->next,10);

    head->next->next = insert(head->next->next,50);
    head->next->next = insert(head->next->next,22);
    head->next->next = insert(head->next->next,19);

    head->next->next->next = insert(head->next->next->next,45);
    head->next->next->next = insert(head->next->next->next,40);
    head->next->next->next = insert(head->next->next->next,35);
    head->next->next->next = insert(head->next->next->next,28);
    
    head = Flatten(head);
    Display();

    return 0;
}