#include"bits/stdc++.h"
using namespace std;
int main(){
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    q=&a[0]+3;
    cout<<*(++p)<<endl;
    cout<<(*p)++<<endl;
    cout<<(*p)++<<endl;
    cout<<*p<<endl;
    cout<<(*p)++<<endl;
    cout<<(*p)++<<endl;
    q--;
    cout<<((*(q+2))--)<<endl;
    cout<<*(p+2)-2<<endl;
    cout<<*(p++-2)-1<<endl;

}
