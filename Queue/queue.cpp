//Implementation of QUEUE using array
#include<iostream>
using namespace std;
#define N 5

int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x){
      
      if(rear==N-1){
         cout<<"Overflow Condition"<<endl;
      }
      else if(rear==-1 && front==-1){
         front=rear=0;
         queue[rear]=x;
      }
      else{
        rear++;
        queue[rear]=x;
      }
}

void dequeue(){
     
     if(rear==-1 && front==-1){
         cout<<"Underflow Condition"<<endl;
     }
     else if(front == rear){
          front=rear=-1;
     }
     else{
         cout<<queue[front]<<endl;
         front++;
     }
}

void peek(){

     if(rear==-1 && front==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
       cout<<queue[front]<<endl;
    }
}

void display(){

    if(rear==-1 && front==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        for(int i=front;i<rear+1;i++){
            cout<<queue[i]<<" ";
        }cout<<endl;
    }
}

int main(){

    enqueue(2);
    enqueue(10);
    enqueue(-1);
    display();
    dequeue();
    peek();
    display();
    dequeue();
    display();
    
    return 0;
}
