#include<iostream>
using namespace std;

int main(){
   
   int i,j,k;
   for(int i=1;i<=5;i++){

       k=i;
       for(j=0;j<5;j++){
           if(j==0){
               cout<<k<<" ";
           }
           else if(j%2==0){

               k=k+((2*i)-1);
               cout<<k<<" ";
           }
           else{
               k=k+10-(2*i-1);
               cout<<k<<" ";
           }
       }cout<<endl;
   }
      
   return 0;
}