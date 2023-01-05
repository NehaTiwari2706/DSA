//COUNT INVERSION-- MERGE SORT

    //BRUTE FORCE APPROACH

#include<iostream>
using namespace std;

int main(){

    int array[]={3,5,6,9,1,2,7,8};

    int inv=0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(array[i]>array[j]){
                inv++;
            }
        }
    }
    cout<<inv<<endl;

    return 0;
}
//Time complexity is O(n2)