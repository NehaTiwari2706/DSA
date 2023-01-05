//BACKTACKING
    //SUM OF SUBSET 
        // an array of n=6 weights are given we have to find the subset whose sum is 30 i.e., m=30.

#include"bits/stdc++.h"
using namespace std;

bool SumOfSubset(int W[],int n,int m){
  
   // int W[6]={5,10,12,13,15,18};
    //int m=30;
    
    if(m==0){
        return true;   //base case
    }

    
    SumOfSubset(W,n-1,m);           //not including current element
    SumOfSubset(W,n-1,m-W[n-1]);    //including current element
    
}

int main(){
    int n;
    int W[n]={5,10,12,13,15,18};
    int m=30;
   
     cout<<SumOfSubset(W,6,m)<<endl;
    return 0;
}

