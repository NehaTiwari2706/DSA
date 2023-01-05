//REVERSING A LINKED LIST using iterator and recursive method
#include<iostream>
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

    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
}

node* reverseIterative(node* &head){

    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr=head;

    while(currptr != NULL){

        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

// node* reverseRecursive(node* &head){

//       if(head==NULL || head->next==NULL){
//           cout<<head;                            //base case
//       }
     
//       node* newhead=reverseRecursive(head->next);

//       head->next->next=head;
//       head->next=NULL;

//       return newhead;
// }

void display(node* head){

    node* temp=head;
    while(temp != NULL){
        cout<< temp->data <<"->";
        temp=temp->next; 
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    node* head=NULL;

    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,1);
    insertAtTail(head,7);
    display(head);

    node* newhead=reverseIterative(head);  
    display(newhead);
    
    // node* newhead=reverseRecursive(head);
    // display(newhead);

    return 0;
}
