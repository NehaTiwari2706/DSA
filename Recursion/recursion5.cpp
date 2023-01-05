//PROGRAM TO PRINT NUMBER TILL N
 // 1. DECREASING ORDER
 // 2. INCREASING ORDER 


#include<iostream>
using namespace std;

void dec(int n){
   
    if(n==1){
        cout<<"1"<<endl;
        return;
    }

    cout<<n<<endl;
    dec(n-1);
}

void inc(int n){
    
     if(n==1){
        cout<<"1"<<endl;
        return;
    }

    inc(n-1);
    cout<<n<<endl;
}

int main(){

    int n;
    cin>>n;

    dec(n);
    inc(n);

    return 0;
}