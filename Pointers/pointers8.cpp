//increment and decrement
#include"bits/stdc++.h"
using namespace std;

int main(){
    int a[5]={3,8,1,9,28};
    int *p=a;
    cout<<*p++<<endl;
    cout<<*p<<endl;
    cout<<*++p<<endl;
    cout<<*p<<endl;
    cout<<*--p<<endl;
    cout<<*p<<endl;
    cout<<*p--<<endl;
    cout<<*p<<endl;
    p=&a[4];
    cout<<*p<<endl;
    cout<<*--p<<endl;
    cout<<*--p<<endl;
    cout<<*--p<<endl;
 
    return 0;
}
