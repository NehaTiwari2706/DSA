#include<iostream>
using namespace std;

int main(){
    
    int n , x, y;
    cout<<"Print number of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2==0){ 
            x=1;
            y=0;
        }
        else{
            x=0;
            y=1;
        }
        
        for(int j=1;j<=i;j++){
            if(j%2 == 0){
                cout<<x;
            }
            else{
                cout<<y;
            }
            cout<<endl;
        }
    }
    return 0;
}

/* 

1
01
101
0101
10101
010101

*/