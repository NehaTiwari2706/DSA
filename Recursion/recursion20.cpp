#include<iostream>
using namespace std;

void decending(int n){

    if(n==0){
        return;    //base case
    }
    cout<<n<<endl;
    decending(n-1);

}

int main(){
    int n=5;
    decending(n);
    return 0;
}
