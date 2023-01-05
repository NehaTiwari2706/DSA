//DELETION IN LINKED LIST and FIND LENGHT OF LINKED LIST 
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

void deletefrombeg(node* &head){
         
         node* temp=head;

         if(head->next==NULL){
             head=NULL;                 //delete from beggining
             delete temp;
         }
         head=head->next;
         delete temp;
}

void deletefromend(node* &head){

    node* temp=head;
    node* n=head;

    while(temp->next != NULL){            
        n=temp;
        temp=temp->next;
    }

    if(temp==head){
        head=0;               //if only one node
        delete temp;
    }
    else{
        n->next=NULL;
        delete temp;           //delete from end
    }
}

void deletefrompos(node* &head,int pos){

      node* temp=head;
      node* n;
      int i=1;

      if(pos==1){
          deletefrombeg(head);
      }
                                  ///delete from any position
      while(i<pos-1){
          temp=temp->next;
          i++;
       }
       n=temp->next;
       temp->next=n->next;

       delete n;
}

void display(node* head){
        
        node* temp=head;
        while(temp != NULL){
            cout<< temp->data <<"->";
            temp=temp->next;
        }                        //Printing LL
        cout<<"NULL"<<endl;
}

void getlenght(node* &head){

    int count=0;
    node* temp=head;

    if(head==NULL){
        cout<<"List is empty"<<endl;
    }                                       //FIND LENGHT OF LINKED LIST

    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    cout<<"Lenght is "<<count<<endl;
}

int main(){
    
    node* head =NULL;
    InsertAtTail(head,4);
    InsertAtTail(head,9);
    InsertAtTail(head,3);
    InsertAtTail(head,5);
    InsertAtTail(head,18);
    display(head);
    
    getlenght(head);

    deletefrombeg(head);
    display(head);
    
    deletefromend(head);
    display(head);
    
    deletefrompos(head,2);
    display(head);

    return 0;
}    