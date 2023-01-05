//For example, an interview question,
    //In a party of N people, each person will shake her/his hand with each other person only once. In total how many hand-shakes would happen?

 #include"bits/stdc++.h"
 using namespace std;

int handshake(int n){

    if(n==0 || n==1){
       return 0 ;         //base case 1
    }
    if(n==2){
        return 1;         //base case 2
    }
    
    handshake(n-1);
    return (n*(n-1))/2;
}

int main(){

    cout<< handshake(20) <<endl;
    return 0;
}
