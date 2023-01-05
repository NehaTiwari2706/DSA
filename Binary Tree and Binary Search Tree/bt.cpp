//jenny mam
#include<iostream>
using namespace std;

struct node{
    
    public:
    int data;
    node* left;
    node* right;
};

struct node* create(){

    int x;
    cout<<"enter data( -1 for no node):";
    cin>>x;
    if(x==-1){
        return 0;
    }
    node* newnode=new node(1);

    newnode->data=x;
    cout<<"enter left child of"<<x;
    newnode->left=create();
    cout<<"enter right child of"<<x;
    newnode->right=create();

    return newnode;
}

void preorder(struct node* root){
    
    if(root==NULL){
        return ;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node* root){

    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

void inorder(struct node* root){

    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);

}

int main(){

    struct node* root;
    root=0;
    root=create();
    
    preorder(root);
    return 0;
}
