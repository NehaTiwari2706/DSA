//lower case to upper case using transform function
#include"bits/stdc++.h"
using namespace std;
int main(){
    string str="asdfghjklwertyuio";

    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<< str <<endl;

    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<< str <<endl;
    return 0;
}
