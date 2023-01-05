//MATRIX MULTIPLICATION
#include"bits/stdc++.h"
using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    
    cout<<"ENTER 1ST MATRIX :"<<endl;
    int a[n1][n2];
    for(int i=0;i<n1;i++){
         for(int j=0;j<n2;j++){
             cin>>a[i][j];
         }
    }
    cout<<"PRINT 1ST MATRIX :"<<endl;
    for(int i=0;i<n1;i++){
         for(int j=0;j<n2;j++){
             cout<<a[i][j]<<" ";
         }
         cout<<endl;
    }
    int b[n2][n3];
    cout<<"ENTER 2nd MATRIX :"<<endl;
    for(int i=0;i<n2;i++){
         for(int j=0;j<n3;j++){
             cin>>b[i][j];
         }
    }
    cout<<"PRINT 2nd MATRIX :"<<endl;
    for(int i=0;i<n2;i++){
         for(int j=0;j<n3;j++){
             cout<<b[i][j]<<" ";
         }
         cout<<endl;
    }
    //multiplication
    int ans[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
           ans[i][j]=0;
        }
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
           for(int k=0;k<n2;k++){
               ans[i][j]+=a[i][k]*b[k][j];
           }
        }
    }
    cout<<"Mulplication :"<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}