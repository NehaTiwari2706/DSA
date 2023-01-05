//Queue Using STACK APNA COLLEGE  
     //using function call stack
#include"bits/stdc++.h"
using namespace std;

class que{
    
    stack<int>s1;
    

    public:
       void push(int x){
            s1.push(x);
       }

       int pop(){
           if(s1.empty()){
               cout<<"Queue is empty"<<endl;
               return -1;
           }

          int x=s1.top();
          s1.pop();

          if(s1.empty()){
                  return x;
          }

          int item=pop();
          s1.push(x);
          return item;
       }

       bool empty(){
           if(s1.empty()){
               return true;
           }
           return false;
       }
};

int main(){
    
    que q;
    q.push(2);
    q.push(7);
    q.push(0);
    q.push(6);
    q.push(02);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;

    cout<<q.empty()<<endl;
   
    return 0;
}