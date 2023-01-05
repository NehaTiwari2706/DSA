// x^n (stack height = n)
#include"bits/stdc++.h"
using namespace std;

int ans(int n,int x){

    if(x==0)
         return 0;

     if(n==1)
         return x;

    return x*ans(n-1,x);
}
int main(){
    int n,x;
    cin>>n>>x;

    cout<<ans(n,x);
}