//PROGRAM TO FIND THE FIRST AND LAST OCCURRENCE OF A NUMBER IN AN ARRAY
#include<iostream>
using namespace std;

int firstocc(int array[],int n,int i,int key){
    
    if(i==n){
        return -1;    //base case
    }

    if(array[i]==key){
        return i;
    }
    return firstocc(array,n,i+1,key);
}

int lastocc(int array[],int n,int i,int key){
   
    if(i==n){
        return-1;    //base case
    }
    
    int restarray=lastocc(array,n,i,key);
    if(restarray != -1){
        return restarray;
    }
    if(array[i]==key){
        return i;
    }
    return-1;
}

int main(){

    int array[]={4,2,1,2,5,2,7};
    cout<<firstocc(array,7,0,2)<<endl;
    cout<<lastocc(array,7,0,2)<<endl;

    return 0;
}
