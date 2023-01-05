//Sum of TWO LINKED LISTS
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

void insertAtHead(node* &head,int val){
     
     node* n=new node(val);
         n->next=head;
         head=n;
         return;
}

void insertAtTail(node* &head,int val){
     
     if(head==NULL){
         insertAtHead(head,val);
         return;
     } 
     node* n=new node(val);
     node* temp=head;

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

int GetSize(node* &head){

    int size=0;
    while(head!=NULL){
        head=head->next;
        size++;
    }
    return size;
}

void swapPointer(node* &p,node* &q){
    node* t=p;
    p=q;
    q=t;
}

void addCarryToRemaining(node* &h1,node* &cur,node* &carry,node* &result){

     int sum;

     if(h1!=cur){
        addCarryToRemaining(h1->next,cur,carry,result);

        sum=h1->data + carry;
        carry = sum/10;
        sum%= 10;
        insertAtHead(result,sum);
     }
}

node* addSameSize(node* &h1,node* &h2,int* carry){
    
    if(h1==NULL){
        return NULL;
    }

    int sum;

    node* result= new node((sizeof(node)));
    
    result->next=addSameSize(h1->next,h2->next,carry);

    sum= (h1->data) + (h2->data)+ carry;

    carry=sum/10;
    sum=sum % 10;

    result->data=sum;

    return result;
}

void addList(node* &h1,node* &h2, node* &result){

    node* cur;
    if(h1==NULL){
        result=h1;
        return;
    }

    if(h2==NULL){
        result=h1;
        return;
    }

    int size1= GetSize(h1);
    int size2= GetSize(h2);

    int carry= 0;

    if(size1==size2){
        result= addSameSize(h1,h2,&carry);
    }
    else{
        int diff=abs(size1-size2);

        if(size1<size2){
            swapPointer(h1,h2);
        }

        for(cur=h1; diff--; cur=cur->next)
        ;

        result=addSameSize(cur,h2,&carry);

        addCarryToRemaining(h1,cur,&carry,result);
    }
    if(carry)
         insertAtHead(result,carry);
}  


int main(){

    node* head1=NULL,*result =NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,4);
    insertAtTail(head1,5);

    node* head2=NULL;
    insertAtTail(head2,1);
    insertAtTail(head2,3);
    insertAtHead(head2,0);

    cout<<"Given Linked Lists are:- "<<endl;
    display(head1);
    display(head2);

    addList(head1,head2,result);
    display(result);

    return 0;
}