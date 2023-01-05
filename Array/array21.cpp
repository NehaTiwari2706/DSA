//LARGEST WORD IN A SENTENCE 
#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    
    cin.ignore();
    char a[n+1];

    cin.getline(a,n);
    cin.ignore();

    int i=0;
    int curlen=0,maxlen=0;
    int st=0,maxst=0;//print largest word 
    while(1){
        if(a[i]==' ' || a[i]=='\0')
            {
                if(curlen>maxlen){
                       maxlen=curlen;
                       maxst=st;
                }
                curlen=0;
                st=i+1;
            }
            else{
            curlen++;
            }
    
            if(a[i]=='\0'){
                break;
            }
                i++; 
    }
    cout<<"LENGTH OF LARGEST WORD IN A SENTENCE : "<<maxlen<<endl;
    for(int i=0;i<maxst;i++){
        cout<<a[i+maxst];
    }
    return 0;
}
