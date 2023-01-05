//Diameter of a binaary tree
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
    return max(calcHeight(root->left),calcHeight(root->right))+1;
}

int calcDiameter(node* root){
    if(root==NULL){
        return 0;
    }

    int lheight=calcHeight(root->left);
    int rheight=calcHeight(root->right);
    int currDiameter=lheight+rheight+1;

    int lDiameter=calcDiameter(root->left);
    int rDiameter=calcDiameter(root->right);
    
    return max(currDiameter, max(lDiameter,rDiameter));
}

int main(){
     
    struct node* Root = new node(1);
    Root->left=new node(2);
    Root->right=new node(3);
    Root->left->left=new node(4);
    Root->left->right=new node(5);
    Root->right->left=new node(6);
    Root->right->right=new node(7);
    // Root->right->right->right=new node(8);
    // Root->right->right->right->right=new node(78);  

    cout<<calcDiameter(Root);
    return 0;
}
/* 
           1
          / \
         2   3
        /\   /\
       4  5 6  7

*/