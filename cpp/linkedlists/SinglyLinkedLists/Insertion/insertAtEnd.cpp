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

// ------------ Insert at End ----------------
// this  returns new head
Node* insertAtEnd(Node* head, int data){
    //Create a new node
    Node* new_node = new Node();
    Node* n = head;

    //put data in new node
    new_node->data = data;
    

    while(n->next!=NULL){
            n=n->next;
    }
    n->next=new_node;
    new_node->next=NULL;
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
    head = insertAtEnd(head,101);
    linkedListTraversal(head);
    
    return 0;
}