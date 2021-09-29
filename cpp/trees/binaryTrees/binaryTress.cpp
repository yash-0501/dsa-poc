#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
};

// Creation
Node* create(){ 
    int x;
    Node* new_node = new Node();
    cout<<"Enter data or enter -1 for no node:  "<<endl;
    cin>>x;
    // Exit condition
    if(x==-1){
        return NULL;
    }
    new_node->data=x;
    // Left child
    cout<<"Enter left child of "<<x<<endl;
    new_node->left=create();
    // Right child
    cout<<"Enter right child of "<<x<<endl;
    new_node->right=create();

    return new_node;
};


// Inorder - Left Root Right
void inorder(Node* root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// Preorder - Root Left Right
void preorder(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// Post Order - Left Right Root
void postorder(Node* root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main()
{
    Node* root = new Node();
    root=NULL;
    root=create();
    cout<<"Pre-order: \n";
    preorder(root);
    cout<<"\n";
    cout<<"In-order: \n";
    inorder(root);
    cout<<"\n";
    cout<<"Post-order: \n";
    postorder(root);
    cout<<"\n";
    return 0;
}