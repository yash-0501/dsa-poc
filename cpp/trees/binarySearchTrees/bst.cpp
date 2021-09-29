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

//Check if the entered tree is a BST 
bool isBST(Node* root){
    static Node* prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return false;
        }if(prev!=NULL && root->data<=prev->data){
            return false;
        }
        prev=root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

//Insertion in BST
void insert(Node* root, int key){
    Node* prev = NULL;
    Node* n= new Node();
    while(root!=NULL){
        prev=root;
        if(root->data==key){
            cout<<"Cannot be inserted.\n";
            return;
        }else if(key<root->data){
            root=root->left;
        }else{
            root=root->right;
        }
    }
    
    n->left=NULL;
    n->right=NULL;
    n->data=key;
    if(key<prev->data){
        prev->left=n;
    }else{
        prev->right=n;
    }
}

Node* inorderPredecessor(Node* n){
    n=n->left;
    while(n->right!=NULL){
        n=n->right;
    }
    return n;

}


//Deletion in BST
Node* deleteNode(Node* root, int value){
    Node* iPre = new Node();
    if(root==NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        delete(root);
        return NULL;
    }

    //Search node to be deleted
    if(value<root->data){
        root->left=deleteNode(root->left, value);
    }else if(value > root->data){
        root->right=deleteNode(root->right, value);
    }
    else{
        iPre = inorderPredecessor(root);
        root->data=iPre->data;
        root->left=deleteNode(root->left, iPre->data);
    }
    return root;
    // Case 1 - delete leaf
    //Case 2 - delete non - leaf node 
    //Case 3 - delete root node
}

//Search for an element in BST
Node* search(Node* n, int x){
    if(n==NULL){
        return NULL;
    }else if (x==n->data)
    { 
        return n;
    }else if(x<n->data){
        return search(n->left, x);
    }
        return search(n->right, x);
    
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

    if(isBST(root)){
        cout<<"Entered tree is a BST.\n";
    }else{
        cout<<"Entered tree isn't a BST.\n";
    }

    Node* n = search(root, 6);
    if(n!=NULL){
        cout<<n->data<<" is present in BST.\n";
    }else{
        cout<<"Element not found.\n";
    }

    insert(root,15);
    cout<<"In order after inserting: \n";
    inorder(root);
    cout<<"\n";
    deleteNode(root,5);
    cout<<"In order after deleting: \n";
    inorder(root);
    cout<<"\n";
    return 0;
}