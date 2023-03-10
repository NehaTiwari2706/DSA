//Queues implementation Using LINKED LIST by APNA COLLAGE
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

class queue{
     
     node* front;
     node* back;

     public:
     queue(){
         front=NULL;
         back=NULL;
     }
     
     void enqueue(int x){

         node* n=new node(x);

         if(front==NULL){
             front=n;
             back=n;
             return;
         }
         back->next=n;
         back=n;
     }

     void dequeue(){

         if(front==NULL){
             cout<<"Queue underflow"<<endl;
             return;
         }

         node* todelete=front;
         front=front->next;

         delete todelete;
     }

     int peek(){
         
         if(front==NULL){
             cout<<"No Element in Queue"<<endl;
             return -1;
         }

         return front->data;
     }

     bool empty(){
          
         if(front==NULL){
               return true;
         }
         return false;
     }
};

int main(){

    queue q;
    q.enqueue(18);
    q.enqueue(04);
    q.enqueue(02);
    q.enqueue(27);
    
    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();
    q.dequeue();

    
    cout<<q.empty()<<endl;

    return 0;
}