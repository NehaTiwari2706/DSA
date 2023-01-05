//Height of a binaary tree
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
int calcHeight(node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight =calcHeight(root->left);
    int rHeight =calcHeight(root->right);

    return max(lHeight,rHeight)+1;
}

int main(){
     
    struct node* Root = new node(1);
    Root->left=new node(2);
    Root->right=new node(3);
    Root->left->left=new node(4);
    Root->left->right=new node(5);
    Root->right->left=new node(6);
    Root->right->right=new node(7);  

    cout<<calcHeight(Root);
    return 0;
}
/* 
           1
          / \
         2   3
        /\   /\
       4  5 6  7

*/