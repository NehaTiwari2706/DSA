//TILING WAYS
  //Given a "2*n" board and tiles of size "2*1" ,count the number of ways to tile the given board using these tiles
#include"bits/stdc++.h"
using namespace std;

int tilingWays(int n){

    if(n==1){
        return 1;      //base case 1
    }
    if(n==0){
        return 0;      //base case 2
    }

    return tilingWays(n-1)+tilingWays(n-2);
}

int main(){

    cout<<tilingWays(4)<<endl;
    return 0;
}
  //     _____________________           ___
  //    |     |    |    |     |         |   |
  //    |_____|____|___ |_____|         |___|  

