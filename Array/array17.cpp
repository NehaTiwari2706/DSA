//MATRIX SEARCH
#include"bits/stdc++.h"
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;

    cout<<"ENTER ARRAY:"<<endl;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }

    cout<<"PRINT ARRAY : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int target;
    cout<<"Target :";
    cin>>target;

    int n=0,m=c-1;
    bool flag=false;
    while(n<r && m>=0){
         if(a[n][m]=target){
             flag=true;
         }
         if(a[n][m]>target){
             c--;
         }
         else{
             r++;
         }
    }
    if(flag){
        cout<<"ELEMENT FOUND"<<endl;
    }
    else{
        cout<<"ELEMENT DOES NOT FOUND";
    }

    return 0;
}
