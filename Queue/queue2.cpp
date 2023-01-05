//Circular Queue Implementation Using ARRAy
#include<iostream>
using namespace std;

#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int n){

    if(front==-1 && rear==-1){
        rear=front=0;
        queue[rear]=n;
    }
    else if( (rear+1)%N == front ){
        cout<<"Queue is full"<<endl;
    }
    else{
        rear=(rear+1)%N;
        queue[rear]=n;
    }
}

void dequeue(){

    if(rear==-1 && front==-1){
        cout<<"Queue is empty"<<endl;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        cout<<queue[front]<<endl;
        front=(front+1)%N;
    }
}

void peek(){
    cout<<queue[front]<<endl;
}

void display(){
    
    int i=front;
    if(rear==-1 && front==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        while(i!=rear){
            cout<<queue[i]<<" ";
            i=(i+1)%N;
        }
       cout<<queue[rear]<<endl;
    }
}

int main(){

    enqueue(7);
    enqueue(6);
    enqueue(4);
    enqueue(2);
    enqueue(10);
    display();
    dequeue();
    enqueue(18);
    enqueue(28);
    dequeue();
    enqueue(28);
    peek();
    display();
    
    return 0;
}