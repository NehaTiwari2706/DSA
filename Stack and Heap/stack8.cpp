//Infix to Prefix conversion
   /* Step 1: Reverse the infix expression i.e A+B*C will become C*B+A. Note while reversing each ‘(‘ will become ‘)’ and each ‘)’ becomes ‘(‘.
Step 2: Obtain the “nearly” postfix expression of the modified expression i.e CB*A+.
Step 3: Reverse the postfix expression. Hence in our example prefix is +A*BC. */
#include<iostream>
#include<stack>
#include<algorithm>
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

    for(int i=0;i<s.length();i++){

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
           if(s[i]=='^'){
               while(( !st.empty()) &&( prec(s[i])<=prec(st.top())))
               {
               res+=st.top();      
                st.pop();
              }
            }
            else{
               while(( !st.empty()) &&( prec(s[i])<prec(st.top())))
               {
               res+=st.top();      
                st.pop();
              }
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

string infixtoPrefix(string s){

    /* Reverse String
	* Replace ( with ) and vice versa
	* Get Postfix
	* Reverse Postfix * */

    reverse(s.begin(),s.end());             // Reverse infix
    
    	// Replace ( with ) and vice versa
	for (int i = 0; i < s.length(); i++) {

		if (s[i] == '(') {
			s[i] = ')';
			i++;
		}
		else if (s[i] == ')') {
			s[i] = '(';
			i++;
		}
	}
    
    string prefix = infixtoPostfix(s);

	// Reverse postfix
	reverse(prefix.begin(), prefix.end());

	return prefix;
}

int main(){
    
    cout<<infixtoPrefix("k+l-m*n+(o^p)*w/u/v*t+q")<<endl;
    return 0;
}