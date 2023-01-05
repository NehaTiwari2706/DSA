//Check for BST
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

//check for bst

bool isBST(node* root,node* min, node*max){
    
    if(root==NULL){
        return true;   //base case
    }
    if(min != NULL && root->data <= min->data){
           return false;
    }
    if(max != NULL && root->data >= max->data){
        return false;
    }

    bool leftvalid= isBST(root->left,min,root);
    bool rightvalid = isBST(root->right,root,max);

    return leftvalid && rightvalid;
}

int main(){

    node* root1= new node(1);
    root1->left=new node(2);
    root1->right= new node(3);
    /*      
      TREE1
             1
            / \
           2   3

    */
   if(isBST(root1 ,NULL,NULL)){
        cout<<"valid BST";
   }else{
       cout<<"invalid BST";
   }
    cout<<endl;
    
    node* root2 =new node(5);
    root2->left=new node(2);
    root2->right=new node(8);

    /*       Tree2
               
               5
              / \
             2   8 
    */
    
    if(isBST(root2 ,NULL,NULL)){
        cout<<"valid BST";
   }else{
       cout<<"invalid BST";
   }

   return 0;
}