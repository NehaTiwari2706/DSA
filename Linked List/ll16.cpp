// C++ program to check if a linked list is palindrome
#include <bits/stdc++.h>
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

int isPallindrome(node* &head){

    node* slow=head;
    node* fast=head;
    node* second_half;
    node* prev_of_slow=head;

    node* midnode=NULL; //FOR ODD CASE

    bool res=true;

    if(head!=NULL && head->next!=NULL){

        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            prev_of_slow=slow;
            slow=slow->next;
        }

        if(fast!=NULL){    //odd case
            midnode=slow;
            slow=slow->next;
        }

        second_half=slow;
        prev_of_slow->next=NULL;

        reverse(&second_half);
        res=compare(head,second_half);
        reverse(&second_half);
        
        if(midnode!=NULL){
            prev_of_slow->next=midnode;
            midnode->next=second_half;
        }
        else{
            prev_of_slow->next=second_half;
        }
    }
    return res;
}

void reverse(node* &head){

    node* prev=NULL;
    node* curr=head;
    node* next;

    if(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
}

void compare(node* &head1,node* &head2){
      
      node* temp1=NULL;
      node* temp2=NULL;

      while(temp1 && temp2){
          if(temp1->data == temp2->data){
              temp1=temp1->next;
              temp2=temp2->next;
          }
          else 
             return 0;
      }

      if(temp1==NULL && temp2==NULL){
          return 1;
      }

      return 0;
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

    int array[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head,array[i]);
    }
    display(head);

    isPalindrome(head) ? cout << "Is Palindrome"
				<< "\n\n" : cout << "Not Palindrome"
				<< "\n\n";
    
    return 0;
}