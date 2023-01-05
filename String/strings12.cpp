//Sorting a string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string x="asdfghjkmnbvcxzxcv";
    sort(x.begin(),x.end());
    cout<<x<<endl;
    return 0;
}
