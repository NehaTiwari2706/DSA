//imp asked in google and amazon 

#include<iostream>
using namespace std;

void wavesort(int array[],int n){

      for(int i=1;i<n;i+=2){

          if(array[i]>array[i-1]){
              swap(array[i],array[i-1]);
          }
          if(array[i]>array[i+1]){
              swap(array[i],array[i+1]);
          }
      }
}

int main(){
    
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];                         //taking input
    }

    wavesort(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";                   //printing output
    }

    return 0;
}