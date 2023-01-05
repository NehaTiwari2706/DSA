// Build a Binary tree from a given array
#include<iostream>
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

node* insertBst(node* root,int val){

    if(root==NULL){
        return new node(val);
    }
    if(val < root->data){
        root->left=insertBst(root->left,val);
    }else{
        //val> root->data
        root->right=insertBst(root->right,val);
    }
    return root;
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

    node* root=NULL;
    root=insertBst(root,5);
    insertBst(root,1);
    insertBst(root,3);
    insertBst(root,4);
    insertBst(root,2);
    insertBst(root,7);
    
    //print inorder
    inorderPrint(root);

    return 0;
}