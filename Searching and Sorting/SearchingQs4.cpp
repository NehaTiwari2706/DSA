//PROGRAM TO PRINT ARRAY IN REVERSE ORDER
#include<iostream>
using namespace std;

void Reverse(int input[],int output[],int n){
     int i;
     for( i=0;i<n;i++){
         output[i]=input[n-(i+1)];
     }
     for(i=0;i<n;i++){
         cout<<output[i]<<" ";
     }
     return;
}
int main()
{
    int n;
    cout<<"Number of elements in an array:"<<endl;
    cin>>n;

    cout<<"Enter " <<  n  << "numbers:"<<endl;
    
    int input[n],output[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<"Reversed array is ";
      Reverse(input,output,n);
    return 0;
}
