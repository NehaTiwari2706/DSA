//Sum of nodes at kth level
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

int sumAtk(node* root,int k){

    if(root==NULL){
        return -1;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    int level=0;
    int sum=0;

    while(!q.empty()){
        node* Node=q.front();
        q.pop();

        if(Node != NULL){
            if(level==k){
                sum+=Node->data;
            }
            if(Node->left){
                q.push(Node->left);
            }
            if(Node->right){
                q.push(Node->right);
            }
        }
        else if(!q.empty()){
             q.push(NULL);
             level++;
        }
    }
    return sum;
}

int main(){
     
    struct node* Root = new node(1);
    Root->left=new node(2);
    Root->right=new node(3);
    Root->left->left=new node(4);
    Root->left->right=new node(5);
    Root->right->left=new node(6);
    Root->right->right=new node(7);  
      
    cout<<sumAtk(Root,2);
    return 0;
}
/* 
           1
          / \
         2   3
        /\   /\
       4  5 6  7

*/