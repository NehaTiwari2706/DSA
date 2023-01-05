#include<iostream>
using namespace std;

void swap(int array[],int i,int j){

    int temp=array[i];
    array[i]=array[j];       //swapping
    array[j]=temp;
}

int partition(int array[],int l,int r){

    int pivot=array[r];   //last element is the pivot
    int i=l-1;

    for(int j=l;j<r;j++){
        if(array[j]<pivot){
            i++;
            swap(array,i,j);
        }
    } 
        swap(array,i+1,r);
        return i+1;
}

void QuickSort(int array[],int l,int r){

    if(l<r){

        int loc=partition(array,l,r);
         QuickSort(array,l,loc-1);
         QuickSort(array,loc+1,r);
    }
}
int main(){

   int array[]={8,7,6,5,4};
    QuickSort(array,0,4);
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}