//PROGRAM TO CHECK IF A GIVEN NUMBER IS POWER OF 2.
#include"bits/stdc++.h"
using namespace std;

bool ispowerof2(int n){
          return(n && !(n & n-1));
}
int main(){

    cout<<ispowerof2(16);
    return 0;
}
