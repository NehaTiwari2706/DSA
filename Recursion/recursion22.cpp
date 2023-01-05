//PRINT SUM OF N NATURAL NUMBER
#include<iostream>
using namespace std;

void SumOfNo(int i,int n,int sum){

    if(i==n){
       // sum+=i;
        cout<<sum<<endl;
        return;
    }
    sum+=i;
    SumOfNo(i+1,n,sum);
    cout<<i<<endl;
}
int main(){

    SumOfNo(1,6,0);
    return 0;
}
