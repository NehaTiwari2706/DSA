//compare 2 strings
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="abc";
    string s2="xyz";
    string s3="abc";
    cout<<s2.compare(s1)<<endl;
    if( s3.compare(s1)==0){
            cout<<"Strings are equal";
    }
    return 0;
}
