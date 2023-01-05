#include<iostream>
using namespace std;

void dnfsort(int array[],int n){
            
            int low=0;
            int mid=0;
            int high=n-1;

            while(mid<=high){

                if(array[mid]==0){
                    swap(array[low],array[mid]);
                    low++;
                    mid++;
                }
                else if(array[mid]==1){
                    mid++;
                }
                else{
                    swap(array[mid],array[high]);
                    high--;
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

    dnfsort(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";                   //printing output
    }

    return 0;
}