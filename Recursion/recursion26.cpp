//PROGRAM TO COUNT THE NUMBER OF PATHS POSSIBLE IN A MAZE
#include"bits/stdc++.h"
using namespace std;

int countpathmaze(int n,int i,int j){

    if(i==n-1 && j==n-1){
        return 1;         //base case 1
    }
    if(i>=n || j>=n){
        return 0;        //base case 2
    }

    return countpathmaze(n,i+1,j)+countpathmaze(n,i,j+1);
}   
int main(){

    cout<<countpathmaze(2,0,0)<<endl;
    return 0;
}
