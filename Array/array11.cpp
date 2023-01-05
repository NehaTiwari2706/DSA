//pair sum problem(sorted array)
   //check if there exist 2 elements in an array such that their sum is equal to given k

#include"bits/stdc++.h"  
using namespace std;

bool pairsum(int a[],int n,int k){

    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(a[i]+a[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
int main(){
    int a[]={2,4,7,11,14,16,20,21};
    int k=31;

    cout<<pairsum(a,8,k);
    return 0;
}
