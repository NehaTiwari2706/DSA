// 0-1 KNAPSACK PROBLEM 
   // Put n items with given weight and value in a knapsack of capacity W to get the maximum total value in a knapsack 
#include"bits/stdc++.h"
using namespace std;

int knapsack(int wt[],int value[],int n,int W){

    if(n==0 || W==0){
        return 0;             //base case
    }

    if(wt[n-1]>W){
        return knapsack(wt,value,n-1,W); //item is not included
    }
                //included                                    //not included
    return max(knapsack(wt,value,n-1,W-wt[n-1])+value[n-1],knapsack(wt,value,n-1,W));
}

int main(){

    int wt[]={10,20,30};
    int value[]={100,50,150};
    int W=50;    //weight of knapsack

    cout<<knapsack(wt,value,3,W)<<endl;

    return 0;
}
