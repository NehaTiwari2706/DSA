//find the subarray in an array which has maximum sum(CUMULATIVE SUM APPROACH)
#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curSum[n+1];
    curSum[0]=0;
    for(int i=1;i<=n;i++){
        curSum[i]=curSum[i-1]+a[i-1];
    }
    int maxSum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=1;j<=i;j++){
            sum=curSum[i]-curSum[j-1];
            maxSum=max(maxSum,sum);
        }
    }
    cout<< maxSum <<endl;
    return 0;
}
