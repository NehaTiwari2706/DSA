// MAXIMUM AND MINIMUM ELEMENT IN AN ARRAY
   // METHOD 2 (Recursive)
#include<iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair getMinMax(int arr[], int low , int high){

    struct Pair minmax, mml , mmr ;
    int mid;
    
    // if only one element
    if ( low == high ){
       minmax.max = arr[low];
       minmax.min = arr[low];

       return minmax;
    }
    
    // if 2 elements
    if(high == low + 1){
        if( arr[low] > arr[high]){
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else{
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }
       // if there are more than 2 elements
       mid = (low + high)/2;
       mml = getMinMax(arr , low , mid);
       mmr = getMinMax(arr , mid + 1, high);


       // compare minimum of 2 PARTS;
       if( mml.min < mmr.min)
           minmax.min = mml.min;
       else
           minmax.min = mmr.min;

         // compare maximum of 2 PARTS;
       if( mml.max < mmr.max)
           minmax.max = mmr.max;
       else
           minmax.max = mml.max;   

    return minmax;
}


int main (){

    int arr[]={10000, 11 ,445, 1 ,330 ,3000};
    int arr_size= 6;

    struct Pair minmax = getMinMax(arr,0, 5);

    cout<<"Minimum element is :"<<minmax.min<<endl;
    cout<<"Maximum element is :"<<minmax.max<<endl;

    return 0;
}
