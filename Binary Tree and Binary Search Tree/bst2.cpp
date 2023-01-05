//Deletion in BST
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

node* inordersucc(node* root){
    
    node* curr=root;
    while(curr && curr->left != NULL){
          curr=curr->left;
    }
    return curr;
}

node* deleteinBST(node* root,int key){
    
    if(key < root->data){
        root->left = deleteinBST(root->left,key);
    }
    else if(key > root->data){
        root->right = deleteinBST(root->right,key);
    }
    else{
        if(root->left ==NULL){
            node* temp= root->right;
            free(root);
            return temp;
        }
        else if(root->right ==NULL){
            node* temp= root->left;
            free(root);
            return temp;
        }
        else{
              node* temp = inordersucc(root->right);
              root->data=temp->data;
              root->right=deleteinBST(root->right,temp->data);

        }
        return root;
    }
}

void inorderPrint(node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){

    node* root=new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->right=new node(6);
     
     /*
        Binary Search Tree
               4
              / \
             2   5
            / \   \
           1   3   6  
     */
    inorderPrint(root);
    cout<<endl;
    deleteinBST(root,2);
    cout<<endl;
    inorderPrint(root);

    return 0;
}