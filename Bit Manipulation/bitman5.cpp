//UPDATE BIT
#include"bits/stdc++.h"
using namespace std;

int update(int n,int pos,int value){
     int mask= ~(1<<pos);
     n =(n & mask);
     return ( n | (value<<pos));
}
int main(){
    int n,pos,value;
    cin>>n >> pos>> value;
    cout<< update(n,pos,value)<<endl;
    return 0;
}
