//Write a function to get the intersection point of two Linked Lists
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

int count(node* &head){
    
    int count=0;
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

int getIntesectionNode(node* head1,node* head2){

    node* temp1=head1;
    node* temp2=head2;

    int c1=count(head1);
    int c2=count(head2);
    int k;
    
    if(c1>c2){
       k = c1 - c2;
    }
    else{
        k = c2-c1;
    }

    for(int i=0;i<k;i++){
        temp1=temp1->next;
    }

    while(temp1!=NULL && temp2!=NULL){

        if(temp1==temp2){
              return temp1->data;
        }
         temp1=temp1->next;
         temp2=temp2->next;

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

    node* head1=new node(2);

    node* head2=new node(4);
    
    node* Newnode= new node(6);
    head1->next=Newnode;

    node* Newnode1= new node(67);
    head1->next->next=Newnode1;
    
    node* Newnode2= new node(99);
    head1->next->next->next=Newnode2; 
    head2->next=Newnode2;

    node* Newnode3= new node(88);
    head2->next->next=Newnode3;
    node* Newnode4= new node(77);
    head2->next->next->next=Newnode4;

    display(head1);
    display(head2);
    
    cout << "The node of intersection is " << getIntesectionNode(head1, head2);

    return 0;
}