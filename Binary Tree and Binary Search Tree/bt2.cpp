//Build Tree from Preorder and inorder
#include"bits/stdc++.h"
using namespace std;

struct node{

    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]== curr){
            return i;
        }
    }
    return -1;
}

node* buildTree(int preorder[],int inorder[],int start,int end){
    
     if(start > end){
       return NULL;
     }

    static int idx=0;
    int curr=preorder[idx];
    idx++;
    node* newnode=new node(curr);
    if(start==end){
        return newnode;
    }
    int pos=search(inorder,start,end,curr);
    newnode->left=buildTree(preorder,inorder,0,pos-1);
    newnode->right=buildTree(preorder,inorder,pos+1,end);

    return newnode;
}

void inorderPrint(node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data;
    inorderPrint(root->right);
}

int main(){

    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    clrscr();
     //BUILD TREE
    node* Root=buildTree(preorder,inorder,0,4);
     inorderPrint(Root);
     
    return 0;
}
