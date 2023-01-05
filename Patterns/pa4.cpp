//Hollow rectangular star pattern:
#include<iostream>
using namespace std;

int main(){

    int r=3;
    int c=5;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1 || i==r || j==1 || j==c){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}