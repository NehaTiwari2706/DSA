//Program to find average of numbers using array
#include<iostream>
using namespace std;

float avgarray(int array[],int n,float avg){
     float sum =0;
     for(int i=0;i<n;i++){
        sum+=array[i];
    }
     avg=sum/n;
       return avg;
}
int main()
{
    int n;
    int avg;
    cout<<"Enter number of elements in an array: "<<endl;
    cin>>n;

    cout<<"Enter "<<  n  <<" number"<<endl;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Average="<<avgarray(array,n,avg)<<endl;
    return 0;
}
