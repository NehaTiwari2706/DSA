//TRANSPOSE OF SQUARE MATRIX
#include"bits/stdc++.h"
using namespace std;

int main(){
    int a[3][3]={{98,2,3},{4, 5, 45},{17,8,89}};

    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            //swap
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //print 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
