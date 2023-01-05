//PROGRAM TO SEARCH ANY NUMBER OR ELEMENT IN AN ARRAY
#include<iostream>
using namespace std;

int Searchkey(int array[],int n,int key)
{
   for(int i=0;i<n;i++){
       if(array[i]==key){
           return i;
       }
   }
   return -1;
}

int main()
{
    int n;
    cout<<"Number of elements in an array:"<<endl;
    cin>>n;

    cout<<"Enter " <<  n  << "numbers:"<<endl;
    
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int key;
    cout<<"Enter number to search in array:"<<endl;
    cin>>key;

    cout<<Searchkey(array,n,key)<<endl;
    return 0;
}
