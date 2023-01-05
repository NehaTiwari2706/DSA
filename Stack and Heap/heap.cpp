// INSERTION (HEAPS) 
//program to insert new element to Heap
#include"bits/stdc++.h"
using namespace std;

#define MAX 1000 //max size of heap

void heapify(int arr[],int n,int i){

    int parent= (i-1)/2;

    if(arr[parent] > 0){
        if(arr[i] > arr[parent]){
            swap(arr[i],arr[parent]);
            heapify(arr,n,parent);    // Recursively heapify the parent node
        }
    }
}

void insertNode(int arr[],int n,int key){
     
     n=n+1;
     arr[n-1]=key;
     heapify(arr,n,n-1);
}

void printArray(int arr[],int n){

    for(int i=0;i<n+1;i++){
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
    int arr[MAX] = { 10, 5, 3, 2, 4 };
 
    int n = 5;
    
    int key = 15;
 
    insertNode(arr, n, key);
    printArray(arr, n);

    // key = 1;
    // // n=n+1;
    // insertNode(arr, n, key);
    // printArray(arr, n);

    // Final Heap will be:
    //     15
    //    /   \
    //   5     10
    //  / \   /  \
    // 2   4 3    1
    return 0;
}