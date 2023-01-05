#include<iostream>
using namespace std;

int main(){

    int n=5;

    for(int i=1;i<=n;i++){
        int k=0;
       for(int j=1;j<=n-i;j++){
           cout<<" ";
       }

       while(k<i){
           cout<<"*"<<" ";
           k++;
       }
        cout<<endl;
    }

    return 0;
}