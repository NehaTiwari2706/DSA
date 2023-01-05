//Build BST from preorder
#include"bits/stdc++.h"
using namespace std;

struct node{
       int data;
       node* left;
       node* right;

       node(int val){
           data=val;
           left =NULL;
           right=NULL;
       }
};

node* constructBST(int preorder[],int* preorderidx,int key,int min,int max,int n){
     if(*preorderidx >= n){
         return NULL;             //Base case
     }
     node* root=NULL;

     if(key > min && key < max){
         root=new node(key);
         *preorderidx=*preorderidx+1;

         if(*preorderidx < n){
             root->left =constructBST(preorder,preorderidx,preorder[*preorderidx],min,key,n);
         }
         if(*preorderidx < n){
             root->right = constructBST(preorder,preorderidx,preorder[*preorderidx],key,max,n);
         }
     }
     return root;
}

void printPreorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){
    /*
            10
           /  \
          2   13
         /   /
        1   11
    */
      
      int preorder[]={10,2,1,13,11};
      int n=5;
      int preorderinx=0;
      node* root=constructBST(preorder,&preorderinx,preorder[0],INT_MIN,INT_MAX,n);
      printPreorder(root);

      return 0;
}