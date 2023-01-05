//Infix to Postfix Conversion
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prec(char c){

    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixtoPostfix(string s){
    
    stack<char>st;
    string res;
    
    for(int i=0;i<s.length();i++){   //scanning from L to R
       
       if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
       {
           res+=s[i];       //If operands
       }
       else if(s[i]=='('){
           st.push(s[i]);           
       }
       else if(s[i]==')'){
           
           while(!st.empty() && st.top()!='('){
               res+=st.top();
               st.pop();
           }
           if(!st.empty()){
               st.pop();       //pop (
           }
       }
       else{
           while(( !st.empty()) &&( prec(s[i])<=prec(st.top()))){
               res+=st.top();       //if the incomimg symbol has lower precedence
               st.pop();
           }
           st.push(s[i]);           
       }
    }
       while(!st.empty()){
           res+=st.top();
           st.pop();
       }
      
    return res;
}

int main(){

    cout<<infixtoPostfix("k+l-m*n+(o^p)*w/u/v*t+q")<<endl;
    return 0;
}