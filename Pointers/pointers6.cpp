//addition 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5]={2,5,7,1,9};
    int *p=&a[0];
    cout<<"The value of a is:"<<*p<<endl;
    p=p+3;
    cout<<"The value of a is:"<<*p<<endl;
    
    return 0;
}
