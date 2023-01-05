//apna college
//PREORDER INORDER AND POSTORDER
#include<iostream>
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

void preorder(struct node* Root){

    if(Root==NULL){
        return;
    }
    cout<<Root->data;
    preorder(Root->left);
    preorder(Root->right);
}

void inorder(struct node* root){

    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}


void postorder(struct node* root){

    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}


int main(){
    
    struct node* Root = new node(1);
    Root->left=new node(2);
    Root->right=new node(3);
    Root->left->left=new node(4);
    Root->left->right=new node(5);
    Root->right->left=new node(6);
    Root->right->right=new node(7);

    preorder(Root);
    cout<<endl;
    inorder(Root);
    cout<<endl;
    postorder(Root);
 /*
         1
       /   \
      2     3
    /  \   / \ 
   4    5 6   7
*/

    return 0;
}