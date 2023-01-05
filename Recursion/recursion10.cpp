//PROGRAM TO REMOVE ALL DUPLICATES FROM THE STRING 
#include"bits/stdc++.h"
using namespace std;

string remdup(string str){
    
    if(str.size()==0){
        return "";      //base case
    }
    char ch=str[0];
    string ans =remdup(str.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    else{
    return ch+ans;
    }
}

int main(){

    string str="asdfgggghhhhhhhh";
    cout<<remdup(str)<<endl;
    return 0;
}

