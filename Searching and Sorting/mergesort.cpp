#include<iostream>
using namespace std;

void merge(int array[],int s,int mid,int e){

    int n1=mid-s+1;
    int n2=e-mid;
    
    int a[n1];
    int b[n2];    //temp arrays

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

        if(a[i]<b[j]){
            array[k]=a[i];
            i++; k++;
        }
        else{
            array[k]=b[j];
            j++; k++;
        }
    }

    while(i<n1){
         array[k]=a[i];   //loop work if end tak nhi pahucha hai
            i++; k++;
    }

    while(j<n2){
         array[k]=b[j];     //loop work if end tak nhi pahucha hai
            j++; k++;
    }
    return ;
}
void mergeSort(int array[],int s,int e){

    if(s<e){

        int mid=(s+e)/2;

        mergeSort(array,s,mid);     
        mergeSort(array,mid+1,e);

        merge(array,s,mid,e);    //merging both arrays
    }
}
int main(){

    int array[]={6,3,9,5,2,8,7,1};
    cout<<"Array is 6 3 9 5 2 8 7 1"<<endl;
    cout<<"Sorted array is ";
    mergeSort(array,0,7);
    for(int i=0;i<8;i++){
         cout<<array[i]<<" ";    //printing sorted array
    }
    cout<<endl;

    return 0;
}