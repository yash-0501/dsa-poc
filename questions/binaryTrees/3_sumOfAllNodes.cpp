/*
        1
       /  \
      2    3
     / \   / \
    4   5  6  7

    ouput = 28
*/


#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int sumOfNodes(Node* root){

    if(root==NULL){
        return 0;
    }
    return sumOfNodes(root->left)+sumOfNodes(root->right)+root->data;
}


int main()
{

    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    cout<<sumOfNodes(root);

    return 0;
}