//x^n (stack size log n)
#include"bits/stdc++.h"
using namespace std;

int ans(int n,int x){

    if(n==0)
       return 1;
    if(x==0)
        return 0;
     
     if(n%2==0){
         return ans(n/2,x)*ans(n/2,x);
     }
     else{
         return ans(n/2,x)*ans(n/2,x)*x;
     }
}
int main(){

    int n,x;
    cin>>n>>x;

    cout<<ans(n,x);
    
    return 0;
}
