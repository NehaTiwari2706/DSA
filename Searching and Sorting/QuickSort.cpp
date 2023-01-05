#include<iostream>
using namespace std;

int partition(int array[],int lb,int ub){
       
       int pivot=array[lb];        //1st element is pivot
       int start=lb;
       int end=ub;

       while(start<end){

           while(array[start]<=pivot){
               start++;
           }
           while(array[end]>pivot){
               end--;
           }
           if(start<end){
               swap(array[start],array[end]);
           }
       }
       swap(array[lb],array[end]);
       return end;
}

void QuickSort(int array[],int lb,int ub){
    
    if(lb<ub){
         int loc=partition(array,lb,ub);
         QuickSort(array,lb,loc-1);
         QuickSort(array,loc+1,ub);
    }
}
int main(){

    int n;
    cout<<"Enter number of elements in an array :";
    cin>>n;
    int array[n];
    cout<<"Enter elements :";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    QuickSort(array,0,n-1);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}