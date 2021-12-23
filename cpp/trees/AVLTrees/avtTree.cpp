#include<iostream>
using namespace std;

class AVLTreeNode{
    AVLTreeNode* left;
    int data;
    AVLTreeNode* right;
    int height;
};

// Find height of AVL Tree - O(1)
int findHeight(AVLTreeNode* root){
    if(!root)
        return -1;
    else
        return root->height;
}

//Single Left Rotation
AVLTreeNode* singleRotateLeft(AVLTreeNode* x){
    AVLTreeNode* n = x->left;
    x->left = n->right;
    n->right=x;
    x->height=max(findHeight(x->left),findHeight(x->right))+1;
    n->height=max(findHeight(n->left),x->height)+1;
    return n;

}

int main()
{
    return 0;
}