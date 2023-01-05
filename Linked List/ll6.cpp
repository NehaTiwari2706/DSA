//Delection and Removal of cycle in Linked List -FLOYD'S ALGORITHM (OR) HARE AND TORTOISE ALGORITHM

//IMPORTANT
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

void makeCycle(node* &head,int pos){

    node* temp=head;
    node* startNode=head;
    int count =1;

    while(temp->next != NULL){

        if(count==pos){
            startNode=temp;
        }
            temp=temp->next;
            count++;
    }
        temp->next=startNode;        
}

bool detectCycle(node* &head){

     node* slow=head;
     node* fast=head;

     while(fast != NULL && fast->next != NULL){

         slow=slow->next;
         fast=fast->next->next;

         if(fast==slow){
             return true;
         }
     }
     return false;
}

void removeCycle(node* &head){

     node* slow =head;
     node* fast =head;

     do{
         slow=slow->next;
         fast=fast->next->next;
     } while(slow != fast);

     while(slow->next != fast->next){
         slow=slow->next;
         fast=fast->next;
     }
     slow->next->next=NULL;
}

// void removeCycle(node* head){
//     node* hare=head ;
//     node* tortoise=head ;
//     do{
//         hare=hare->next->next ;
//         tortoise=tortoise->next ;
//     }while(hare!=tortoise) ;
//     if(hare==head){
//         while(tortoise->next!=head)
//         tortoise=tortoise->next ;
//         tortoise->next=NULL ;
//         return ;
//     }
//     hare=head ;
//     while(hare->next!=tortoise->next){
//         hare=hare->next ;
//         tortoise=tortoise->next ;
//     }
//     tortoise->next=NULL ;
// }


void display(node* head){

    node* temp=head;
    while(temp != NULL){
        cout<< temp->data <<" -> ";
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
    
    makeCycle(head ,3);
    //display(head);
    
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    display(head);
    
    return 0;
}