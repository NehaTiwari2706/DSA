//Queues implementation Using ARRAY by APNA COLLAGE
#include<iostream>
using namespace std;

#define n 20

class queue{

    int *arr;
    int front;
    int back;

    public: 
          queue(){
              arr=new int[n];
              front=-1;
              back=-1;
          }

    void enqueue(int x){

        if(back==n-1){
            cout<<"Queue overflow"<<endl;
        }
        back++;
        arr[back]=x;

        if(front==-1){
            front++;
        }
    }

    void dequeue(){

        if(front==-1 || front>back){
            cout<<"Queue is empty"<<endl;
        }
        front++;
    }
    
    int peek(){
          if(front==-1 || front>back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

         return arr[front];
    }

    bool empty(){
         if(front==-1 || front>back){
            return true;
        }
    }
};

int main(){
    
    queue q;
    
    q.enqueue(3);
    q.enqueue(9);
    q.enqueue(11);
    q.enqueue(4);

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.empty()<<endl;

    return 0;
}