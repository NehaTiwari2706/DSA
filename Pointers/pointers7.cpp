//SUBTRACTION
#include"bits/stdc++.h"
using namespace std;

int main(){
    int a[5]={4,2,6,9,4};
    int *p=a;
    int *q=&a[3];
    cout<<q-p<<endl;
    cout<<p-q<<endl;
    cout<<"value :"<<*q<<endl;
    q=q-2;
    cout<<"value:"<<*q<<endl;
    cout<<q-p<<endl;
    return 0;
}
