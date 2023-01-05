//program for implement deletion in Heaps
#include"bits/stdc++.h"
using namespace std;

void heapify(int array[],int n,int i) {
     
     int largest=i;
     int l= 2*i;
     int r=(2*i)+1;

     while(l<=n  && array[l] > array[largest]){
         largest=l;
     }
      while(r<=n  && array[r] > array[largest]){
         largest=r;
     }
     if(largest != i){
         swap(array[largest],array[i]);
         heapify(array,n,largest);
     }
}

void deleteRoot(int array[],int n){

       int lastEle= array[n-1];
       array[0]= lastEle;
       n=n-1;

       // heapify the root node
        heapify(array, n, 0);
   }

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){

// Array representation of Max-Heap
    //     10
    //    /  \
    //   5    3
    //  / \
    // 2   4
    int arr[] = { 10, 5, 3, 2, 4 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    deleteRoot(arr, n);
 
    printArray(arr, n-1);
  
    
 
    return 0;
}