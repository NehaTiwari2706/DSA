//append 2 strings
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1="fam";
    string str2="ily";

   // str1.append(str2);
    str1=str1+str2;
    cout<<str1<<endl;
    cout<<str1[1]<<endl;
    cout<<str2[2]<<endl;

    string str3="chal ave hoshiyaari";
    str3.clear();
    cout<<str3;
    return 0;
}
