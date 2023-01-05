//PROGRAM TO PRINT ALL POSSIBLE PERMUTATIONS OF A STRING 
#include"bits/stdc++.h"
using namespace std;

void swap( char x,char y){
      
      char temp;                         //NI AAYA HAI ANSWER :-[
      temp=x;
      x=y;
      y=temp;

}
void permutation(string a,int l,int r){

    if(l==r){
        cout<<a<<endl;   //base case
        return;
    }
    
        //PERMUTATION MODE
        for(int i=l;i<=r;i++){

            swap( a[l],a[i]);   //swapping done
            permutation(a,l+1,r);   //recursion called
            swap( a[l],a[i]);  //backtrack

        }
}
int main(){
    
    string a="ABC";
    int n=a.size();
    permutation(a,0,n-1);
    return 0;
}
