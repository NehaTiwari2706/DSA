//Length or Size 
#include<iostream>
#include<string>
using namespace std;

int main(){
  string s="nincompoop";
  cout<<s.size()<<endl;
  for(int i=0;i<s.size();i++){
    cout<<s[i]<<endl;
  }
  return 0;
}
