//empty function 
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="neha";
    cout<<s<<endl;
    
    s.clear();
    if(s.empty()){
       cout<<"String is empty";
    }
    
    return 0;
}
