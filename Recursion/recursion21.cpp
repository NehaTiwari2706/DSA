#include<iostream>
using namespace std;

void ascending(int n){

    if(n==6){
        return ;      //base case
    }

    cout<<n<<endl;
    ascending(n+1);

}

int main(){

    int n=1;
    ascending(n);
    return 0;
}
