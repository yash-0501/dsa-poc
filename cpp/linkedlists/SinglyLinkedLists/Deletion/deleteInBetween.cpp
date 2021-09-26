#include <iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
};

//-------------- Linked List Traversal ----------------
void linkedListTraversal(Node* n){
    while(n != NULL){
        cout<<"Element is "<<n->data<<endl;
        n=n->next;
    }
    
}

// ------------ delete between Nodes at given Index ----------------
// this function  returns new head
Node* deleteBetween(Node* head, int index){
    //Create a new node
    Node* new_node = new Node();
    // Copy head
    Node* p = head;
    int i=0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    new_node = p->next;
    p->next=new_node->next;
    delete new_node;
    return head;
}



// ------------ Linked List Creation -------------
int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // allocated in heap
    head = new Node();
    second = new Node();
    third = new Node();

    // Assign 7 to data of first/head Node
    head->data=7;
    // Linking first and second Node
    head->next=second;
    
    // Assign 21 to data of second Node
    second->data=21;
    // Linking second and third Node
    second->next=third;
    
    // Terminate list at third Node
    third->data=35;
    // NULL
    third->next=NULL;

    cout<<"Linked List before deleteion"<<endl;
    linkedListTraversal(head);
    cout<<"Linked List after deleteion"<<endl;
    head = deleteBetween(head,1);
    linkedListTraversal(head);
    
    return 0;
}