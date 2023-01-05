//Merge K sorted list
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

void display(node* head){

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* newNode(int data){

    node* temp=new node(data);
    temp->next=NULL;
    return temp;
}

node* mergeKlist(node* arr[],int last){

    return arr[0];
}

int main(){
    
    int k=3;

    node* arr[k];

    arr[0]=newNode(1);
    arr[0]->next=newNode(4);
    arr[0]->next->next=newNode(5);

    arr[1]=newNode(1);
    arr[1]->next=newNode(3);
    arr[1]->next->next=newNode(4);

    arr[2]=newNode(2);
    arr[2]->next=newNode(6);


    cout<<"Modified Linked List :"<<endl;
    node* newhead=mergeKlist(arr,k-1);
    display(newhead);
    
    return 0;
}