//GENERATE SUBSTRINGS WITH ASCII NUMBERS 
// A=65 B=66
#include"bits/stdc++.h"
using namespace std;

void sub(string s,string ans){

    if(s.size()==0){
        cout<<ans<<endl;
        return ;        //base case   
    }

    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);

    sub(ros,ans);
    sub(ros,ans+ch);
    sub(ros,ans+ to_string(code));
}

int main(){

    sub("AB","");
    return 0;
}