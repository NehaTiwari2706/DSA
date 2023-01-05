//REVERSE A STRING USING RECURSION
#include<iostream>
#include<string>
using namespace std;

void reverse(string s){

    if(s.size()==0){
        return;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main(){

    string s="neha tiwari";
    reverse(s);

    return 0;
}
