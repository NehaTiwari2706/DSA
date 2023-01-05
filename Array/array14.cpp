//SPIRAL ORDER PRINT 
#include"bits/stdc++.h"
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int a[n][m];
    cout<<"ENTER ELEMENTS : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"PRINT 2D ARRAY : "<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    
    int row_start=0,row_end=n-1,column_start=0,column_end=m-1;

    while(row_start<=row_end &&  column_start<=column_end){
        //for row start
        for(int c=column_start;c<=column_end;c++){
            cout<<a[row_start][c]<<" ";
        }
        row_start++;

        //for column end
        for(int r=row_start;r<=row_end;r++){
            cout<<a[r][column_end]<<" ";
        }
        column_end--;

        //for row end
        for(int c=column_end;c>=column_start;c--){
            cout<<a[row_end][c]<<" ";
        }
        row_end--;

        //for column start
        for(int r=row_end;r>=row_start;r--){
            cout<<a[r][column_start]<<" ";
        }
        column_start++;
    }
    return 0;
}