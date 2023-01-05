#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements in an array: ";
    cin>>n;
    cout<<"Enter elements :";
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-1-i;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
           break;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }cout<<endl;

    return 0;
}
