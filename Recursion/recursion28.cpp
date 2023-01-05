//FRIENDS PAIRING 
   //find the number of ways in which n friends can remain single or can be paired up.
#include"bits/stdc++.h"
using namespace std;

int friendspair(int n){

    if( n==0 || n==1  || n==2 ){
        return n;                //base case 
    }

    return friendspair(n-1)+friendspair(n-2)*(n-1);
}

int main(){

    cout<<friendspair(4)<<endl;
    return 0;
}
