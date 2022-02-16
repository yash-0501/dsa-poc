/*
        1
       /  \
      2    3
     / \   / \
    4   5  6  7

    ouput = 1234567
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

void getSum(Node* root, int k){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int sum=0, level=0;
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            if(level==k){
                sum+=node->data;
            }
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        else if(!q.empty()){
            level++;
            q.push(NULL);
        }
    }
    cout<<sum;
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
    int k=2;
    getSum(root,k);

    return 0;
}