//DOUBLY LINKED LIST
     /* Insert at head and tail 
          Deletion at head, tail and at any position 
          append last k nodes at the beggining
     */
         

#include<iostream>
using namespace std;

class node{

   public:
       int data;
       node* next;
       node* prev;

          node(int val){
              data=val;
              next=NULL;
              prev=NULL;
          }
};

void insertAtHead(node* &head,int val){

    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
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
    n->prev=temp;
}

// void InsertafterGivenPos(node* &head,int pos,int val){

//     node* n = new node(val);
//     int i=1;
    
//     int count = sizeof(node);

//     if(pos>count){
//         cout<<"Invalid Position "<<endl;
//     }
//     else{
//         node* temp = head;
//         node* newptr = head;
//         while(i < pos){
//             temp = temp -> next;
//             newptr = newptr -> next -> next;
//             i++;
//         }
    
//     n->prev=temp;
//     temp->next=n;
//     n->next=newptr;
//     newptr->prev=n;
//     }
// }   

void deleteAtHead(node* &head){

    node* todelete=head;

     if(head->next == NULL){
        head = NULL;
        delete todelete;           //if only 1 node
        return;
    }

    head=head->next;
    head->prev=NULL;

    delete todelete;
}

void deletion(node* &head,int pos){

    if(pos==1){
        deleteAtHead(head);
        return ;
    }

    node* temp=head;
    int count =1;

    while(temp != NULL && count != pos){
        temp=temp->next;
        count++;
    }

    temp->prev->next=temp->next;

    if(temp->next !=NULL){
        temp->next->prev=temp->prev;
    }

    delete temp;
}

int length(node* head){

    int l=0;
    node* temp=head;
    while(temp!= NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* kappend(node* &head,int k){

    node* newhead;
    node* newtail;
    node* tail=head;

    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL){

        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }   
        tail=tail->next;
        count++;
    }

    newtail->next=NULL;
    tail->next=head;

    return newhead;
}

void display(node* head){
     
     node* temp=head;
     while(temp!=NULL){
         cout<<temp->data<<" -> ";
         temp=temp->next;
     }
     cout<<"NULL"<<endl;
}

int main(){

    node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);

    insertAtHead(head,9);
    display(head);
    
    deletion(head,4);
    display(head);

    deleteAtHead(head);
    display(head);

    node* n=kappend(head,2);
    display(n);

    return 0;
}
