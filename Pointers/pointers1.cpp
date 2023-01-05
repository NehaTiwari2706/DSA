//access and modify variable using pointer
#include"bits/stdc++.h"
using namespace std;

int main(){
    int a=11;
    int *ptra=&a;

    cout<<"value of a : "<<*ptra<<endl;
    *ptra=12;
    cout<<"modified value of a :"<<*ptra<<endl;

    return 0;
}
