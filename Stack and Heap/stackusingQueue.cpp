//STACK USING QUEUE 
    //METHOD 1: PUSH IS COSTLY(APNA COLLEGE)
      /* Method 1 (By making push operation costly) 
This method makes sure that newly entered element is always at the front of ‘q1’, so that pop operation just dequeues from ‘q1’. ‘q2’ is used to put every new element at front of ‘q1’.
 

1] push(s, x) operation’s step are described below: 
>>Enqueue x to q2
>>One by one dequeue everything from q1 and enqueue to q2.
>>Swap the names of q1 and q2
2] pop(s) operation’s function are described below: 
>>Dequeue an item from q1 and return it.  */
        
#include<bits/stdc++.h>
using namespace std;

class Stack{

     int N;
     queue<int>q1;
     queue<int>q2;

     public:
        Stack(){
            N=0;
        }

     void push(int x){

         q2.push(x);
         N++;
         while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
         }

         queue<int>temp =q1;
         q1=q2;
         q2=temp;
     }   
     
     void pop(){
         q1.pop();
         N--;
     }

     int top(){
         return q1.front();
     }

     int size(){
         return N;
     }
};


int main(){
     
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
    cout<<st.top()<<endl;
    st.pop();  
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    
    
    cout<<st.size()<<endl;

    return 0;
}