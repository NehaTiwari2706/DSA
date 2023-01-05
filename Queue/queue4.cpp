//Queue Implementation Using STACK
#include<iostream>
using namespace std;

#define N 5
int s1[N],s2[N];
int top1=-1,top2=-1;
int count=0;

int push1(int data){

    if(top1==N-1){
        cout<<"Overflow Condition"<<endl;
    }
    else{
        top1++;
        s1[top1]=data;
    }
}

void enqueue(int n){
    push1(n);
    count++;
}

int pop1(){
    return s1[top1--];
}

int pop2(){
    return s2[top2--];
}

int push2(int data){

    if(top2==N-1){
        cout<<"Overflow Condition"<<endl;
    }
    else{
        top2++;
        s2[top2]=data;
    }
}

void dequeue(){

    if(top1==-1 && top2==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        for(int i=0;i<count;i++){
            int a=pop1();          //pushing in stack2
            push2(a);
        }
        int b=pop2();
        cout<<b<<endl;          //pop 
        count--;
       
        for(int i=0;i<count;i++){
            int a=pop2();
            push1(a);           //pushing it again in stack1
        }
    }
}

void display(){
    for(int i=0;i<=top1;i++){
        cout<<s1[i]<<" ";
    }cout<<endl;
}

int main(){
    
    enqueue(2);
    enqueue(5);
    enqueue(-3);
    enqueue(5);
    enqueue(9);
    display();

    dequeue();
    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    display();

    
    return 0;
}