#include<iostream>
using namespace std;

int main(){

   int r =5,c=5;

   for(int i=1;i<=r;i++){
       for(int j=i;j<=c+i-1;j++){
           cout<<j<<" ";
       }cout<<endl;
   }

   return 0;
}
