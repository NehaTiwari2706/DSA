#include<iostream>
using namespace std;

void countsort(int array[],int n){

     int k=0;                          //array having k (max value in array)distinct elements
     for(int i=0;i<n;i++){
         k=max(k,array[i]);
     }
     
     int count[n]={0};
     for(int i=0;i<n;i++){
         count[array[i]]++;                    //Count array - finds frequency of key elements
     }
     
     for(int i=1;i<=k;i++){
         count[i]=count[i]+count[i-1];          //updated count array - finds position of key elements
     }

     int b[100];                                  //output array
     for(int i=n-1;i>=0;i--){
               b[--count[array[i]]]=array[i];
     }
     
     for(int i=0;i<n;i++){
         array[i]=b[i];                          //copying output array b in array
     }
}

int main(){
    
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];                         //taking input
    }

    countsort(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";                   //printing output
    }

    return 0;
}
