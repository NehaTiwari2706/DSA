//PROGRAM TO FIND SMALLEST ELEMENT OF ARRAY USING LINEAR SEARCH
#include<iostream>
using namespace std;

int minielement(int array[],int n,int mini){
    mini=array[0];
    for(int i=0;i<n;i++){
        if(array[i]<mini)
        mini=array[i];
    }
        return mini;
    
}
int main(){
    int n;
    cout<<"Enter number of elements in an array:"<<endl;
    cin>>n;

    cout<<"Enter "<< n <<" number:"<<endl;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int mini;
    cout<<"Minimum element of array is "<< minielement(array,n,mini)<<endl;
    return 0;
}
