//PROGRAM TO CHECK IF AN ARRAY IS SORTED OR NOT
#include<iostream>
using namespace std;

bool sort(int array[],int n){
     
     if(n==1){
         return true;     //base case
     }
    bool restarray=sort(array+1,n-1);
    return (array[0]<array[1] && restarray);
}
int main(){

    int array[]={1,2,3,9,5,6};

    cout<<sort(array,6)<<endl;
    return 0;
}
