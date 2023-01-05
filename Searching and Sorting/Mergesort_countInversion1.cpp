//COUNT INVERSION - MERGE SORT

#include"bits/stdc++.h"
using namespace std;

int merge(int array[],int s,int mid,int e){
        
        int inv=0;
        int n1=mid-s+1;
        int n2=e-mid;

        int a[n1],b[n2];      //temp arrays

        for(int i=0;i<n1;i++){
            a[i]=array[s+i];
        }

        for(int i=0;i<n2;i++){
            b[i]=array[mid+1+i];
        }
        
        int i=0;
        int j=0;
        int k=s;

        while(i<n1 && j<n2){

            if(a[i]<=b[j]){
                array[k]=a[i];
                i++; k++;
            }
            else{
                array[k]=b[j];
                // a[i]+a[i+1]+a[i+2]+.....a[]>a[j] and i<j
                inv += n1 -i;
                j++; k++;            
            }
        }

        
        while(j<n2){

            array[k]=b[j];
            j++; k++;
        }       
     return inv;
}              
               
int quicksort(int array[],int s,int e){
        
        int inv=0;
    if(s<e){

        int mid=(s+e)/2;
        inv += quicksort(array,s,mid);
        inv += quicksort(array,mid+1,e);
        inv += merge(array,s,mid,e);
    }
    return inv;
}

int main(){
   
   int n;
   cin>>n;
   int array[n];
   for(int i=0;i<n;i++){
       cin>>array[i];
   }
   cout<<quicksort(array,0,n-1)<<endl;;
   return 0;
}
