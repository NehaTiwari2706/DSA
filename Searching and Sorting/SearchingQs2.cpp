//PROGRAM TO FIND MAXIMUM ELEMENT OF ARRAY
#include<iostream>
using namespace std;

int maxelement(int array[],int n,int max){
          max=array[0];
          for(int i=1;i<n;i++){
              if(array[i]>max)
                  max=array[i];
          }
                return max;
}
int main()
{   
    int n,max;
    cout<<"Enter number of element in an array:"<<endl;
    cin>>n;

    cout<<"Enter " << n  << " number:"<<endl;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Maximum element of array="<< maxelement(array,n,max)<<endl;
    return 0;
}
