#include<iostream>
using namespace std;

int main(){
    void *p;
    int a=-11;
    float b=1.23;
    char c='0';
    p=&a;
    cout<<*(int*)p<<endl;
     p=&c;
    cout<<*(char*)p<<endl;
    p=&b;
    cout<<*(float*)p<<endl;
    return 0;
}
