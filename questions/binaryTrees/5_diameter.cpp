/*
Diameter of a binary tree is the number of nodes in the longest path between any two leaves.
*/

/*
        1
       /  \
      2    3
     / \   / \
    4   5  6  7
   /
  8

    ouput = 6 (8->4->2->1->3->7)
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

int height(Node* root){

    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}

//O(n2) since height is also calculated in O(n) and diameter also O(n)
int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    int currDiameter = lHeight+rHeight+1;

    int lDiameter = diameter(root->left);
    int rDiameter = diameter(root->right);

    return max(currDiameter, max(lDiameter,rDiameter));
}

int optimizedDiameter(Node* root, int* height){
    if(root==NULL){
        *height = 0;
        return 0;
    }

    int lh=0, rh=0;
    int lDiameter = optimizedDiameter(root->left, &lh); 
    int rDiameter = optimizedDiameter(root->right, &rh); 

    int currDiameter = lh+rh+1;
    *height = max(lh,rh)+1;

    return max(currDiameter, max(lDiameter,rDiameter));
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
    root->left->left->left = new Node(8);

    cout<<diameter(root)<<endl;
    int height = 0;
    cout<<optimizedDiameter(root, &height);

    return 0;
}