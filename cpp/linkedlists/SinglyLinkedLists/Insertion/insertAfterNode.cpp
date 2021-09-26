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


// ------------ Insert After Node ----------------
// this  returns new head
Node* insertAfterNode(Node* head, Node* prevNode, int data){
    //Create a new node
    Node* new_node = new Node();

    //put data in new node
    new_node->data = data;
    
    new_node->next=prevNode->next;
    prevNode->next = new_node;
    
    // return new_node as head
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

    cout<<"Linked List before Insertion"<<endl;
    linkedListTraversal(head);
    cout<<endl<<"Linked List after Insertion"<<endl;
    head = insertAfterNode(head,second,101);
    linkedListTraversal(head);
    
    return 0;
}