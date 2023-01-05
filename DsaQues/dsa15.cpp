//REARRANGE A LINKED LIST IN A ZIG ZAG FASHION
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

// void zigzaglist(node* &head){

//     if(head==NULL){
//         return;
//     }

// }
void zigZagList(node* head)
{
     bool flag=true;
     node* curr=head;
    // a< b >c
     while(curr->next!=NULL){
         if(flag){ //"<"

             if(curr->data > curr->next->data){
                 swap(curr->data,curr->next->data);
             }
         }
         else{  //">"

             if(curr->data < curr->next->data){
                 swap(curr->data,curr->next->data);
             }
         }
         curr=curr->next;
         flag=!flag;  //flip flag for reverse checking 
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

    node* head=NULL;
    //4->3->7->8->6->2->1->NULL
    insertAtTail(head,4);
    insertAtTail(head,3);
    insertAtTail(head,7);
    insertAtTail(head,8);
    insertAtTail(head,6);
    insertAtTail(head,2);
    insertAtTail(head,1);
    cout<<"Given linked list \n";
    display(head);
    
    zigZagList(head);
    cout<<"\nZig Zag Linked list \n";  
    display(head);
    
     
    return 0;
}