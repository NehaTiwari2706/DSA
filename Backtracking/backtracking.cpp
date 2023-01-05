//RATE IN A MAZE

  //1 0 1 0 1
  //1 1 1 1 1
  //0 1 0 1 0
  //1 0 0 1 1 
  //1 1 1 0 1



#include"bits/stdc++.h"
using namespace std;

bool isSize(int n,int x,int y,int** arr){

    if(x<n && y<n && arr[x][y]==1){       
        return true;                     //Whether to move forward or not
    }
    return false;
}

bool ratinMaze(int n,int x,int y,int** arr,int** solArr){
    
    if(x==n-1 && y==n-1){
        solArr[x][y]=1;               //base case
        return true;
    }
    if(isSize(n,x,y,arr)){

        solArr[x][y]=1;

        if(ratinMaze(n,x+1,y,arr,solArr)){
            return true;              //move right
        }
        if(ratinMaze(n,x,y+1,arr,solArr)){
            return true;             //move down
        }

        solArr[x][y]=0;                 //back tracking
        return false;
    }
      return false;
}

int main(){

    int n;
    cin>>n;

    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];        //dynamical Memory allocation
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];               //taking input
        }                       
    }
    cout<<endl;
    
    int** solArr=new int*[n];
    for(int i=0;i<n;i++){
        solArr[i]=new int[n];       //dynamic Allocating memory
        for(int j=0;j<n;j++){
            solArr[i][j]=0;
        }
    }

    if(ratinMaze(n,0,0,arr,solArr)){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solArr[i][j]<<" ";      //Printing solArr 
        }
         cout<<endl;                      
      }
    }

    return 0;
}
