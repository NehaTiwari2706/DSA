//Level Order Traversal
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

void printOrderTraversal(node* Root){

    if(Root==NULL){
        return;
    }
    queue<node*>q;
    q.push(Root);
    q.push(NULL);

    while(!q.empty()){
      node* Node=q.front();
      q.pop();
      if(Node != NULL){
          cout<<Node->data<<" ";
      if(Node->left){
          q.push(Node->left);
      }
      if(Node->right){
          q.push(Node->right);
      }
    }
    else if(!q.empty()){
        q.push(NULL);
    }
  }
}

int main(){
     
    struct node* Root = new node(1);
    Root->left=new node(2);
    Root->right=new node(3);
    Root->left->left=new node(4);
    Root->left->right=new node(5);
    Root->right->left=new node(6);
    Root->right->right=new node(7);  
    printOrderTraversal(Root);   
    
    return 0;
}
/* 
           1
          / \
         2   3
        /\   /\
       4  5 6  7

*/