//In a party of N couples, only one gender (either male or female) can shake hands with everyone. How many shake-hands would happen?
#include"bits/stdc++.h"
using namespace std;

int handshake(int n){

    if(n==1){
        return 0;       //base case 
    }

    handshake(n-1);
    return 3*(n-1);
}

int main(){
    
    cout<< handshake(5) <<endl;
    return 0;
}
