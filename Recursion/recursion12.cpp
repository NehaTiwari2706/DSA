//PROGRAM TO MOVE ALL x TO THE END OF THE STRING
#include"bits/stdc++.h"
using namespace std;

string moveX(string s){

    if(s.size()==0){
        return "";    //base case
    }

    char ch=s[0];
    string ans=moveX(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    else{
        return ch+ans;
    }
}
int main(){

    string s="xedxwxxw";
    cout<<moveX(s)<<endl;

    return 0;
}
