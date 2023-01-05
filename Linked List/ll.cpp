//INSERT THE NODE AT TAIL, HEAD, AFTER A GIVEN POSITION ,SEARCHING NODE AND DELETION
#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
                                  //Creating node
           node(int val){
               data=val;
               next=NULL;
           }
};

void InsertAtTail(node* &head,int val){

    node* n = new node(val);
    
    if(head==NULL){
        head=n;
        return;
    }                            //Inserting node at tail

    node* temp = head;
    while(temp -> next != NULL){
                temp=temp->next;
    }
    temp->next = n;
}

void InsertAtHead(node* &head,int val){
        
        node* n = new node(val);
        n->next = head;
        head=n;                 //Inserting node at head
}

void InsertafterGivenPos(node* &head,int pos,int val){

    node* n = new node(val);
    int i=1;
    
    int count = sizeof(node);

    if(pos>count){
        cout<<"Invalid Position "<<endl;
    }
    else{
        node* temp = head;
        while(i < pos){
            temp = temp -> next;
            i++;
        }
        n ->next = temp ->next;   //Inserting node after a given position
        temp -> next = n;
    }
}

void deleteAtHead(node* &head){

     node* todelete=head;
     head = head -> next;                         //delete at head

     delete todelete;
}

void deletion(node* &head,int val){
    
    if(head==NULL){
        return;                                  //if the linked list is empty
    }

    if(head->next==NULL){
        deleteAtHead(head);
        return;                                  //if the linked list has only one node
    }

    node* temp = head;
    while(temp -> next -> data != val){           //delete the given node
        temp= temp-> next;
    }
    node* todelete = temp->next;
    temp->next = temp -> next -> next;

    delete todelete;
}

void display(node* head){
        
        node* temp=head;
        while(temp != NULL){
            cout<< temp->data <<"->";
            temp=temp->next;
        }                        //Printing LL
        cout<<"NULL"<<endl;
}

bool search(node* &head,int key){

       node* temp=head;
        while(temp != NULL){
            if(temp->data==key){
                return true;
            }                   //Search node
            temp=temp->next;
        }
        return false;
}

int main(){

    node* head =NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    display(head);

    InsertAtHead(head,4);
    display(head);

    InsertafterGivenPos(head,2,9);
    display(head);
    
    cout<< search(head,4)<<endl;
    
    deletion(head,3);
    display(head);
    
    deleteAtHead(head);
    display(head);

    return 0;
}
