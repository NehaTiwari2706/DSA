//longest arithmetic array
#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=2;
    int lenght=2;
    int diff=a[1]-a[0];

    for(int i=2;i<n;i++){
        if(diff==a[i]-a[i-1]){
            lenght++;
        }
        else{
            lenght=2;
            diff=a[i]-a[i-1];
        }
        ans=max(ans,lenght);
    }
    cout<<ans;
    return 0;
}
