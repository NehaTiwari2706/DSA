//STACK USING QUEUE 
  /*Method 2 (By making pop operation costly) 
In push operation, the new element is always enqueued to q1. In pop() operation, if q2 is empty then all the elements except the last, are moved to q2. Finally the last element is dequeued from q1 and returned.
 

]---push(s, x) operation: 
-Enqueue x to q1 (assuming size of q1 is unlimited).
]---pop(s) operation: 
-One by one dequeue everything except the last element from q1 and enqueue to q2.
-Dequeue the last item of q1, the dequeued item is result, store it.
-Swap the names of q1 and q2
-Return the item stored in step 2.*/
 
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
       q1.push(x);
       N++;
     }   

     void pop(){

       if(q1.empty()){
       return;
       }

       while(q1.size() != 1){
         q2.push(q1.front());
         q1.pop();
       }

       q1.pop();
       N--;

       queue<int> temp=q1;
       q1=q2;
       q2=temp;
     }

     int top(){

       if(q1.empty()){
       return -1;
       }

       while(q1.size() != 1){
         q2.push(q1.front());
         q1.pop();
       }

       int ans=q1.front();
       q2.push(ans);

       queue<int> temp=q1;
       q1=q2;
       q2=temp;

       return ans;
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
    cout<<st.size()<<endl;
    
    return 0;
}