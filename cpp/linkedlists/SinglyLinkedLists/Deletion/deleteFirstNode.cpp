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

// ------------ Delete First Node ----------------
// this function returns new head
Node* deleteFirstNode(Node* head){
    if(head == NULL)
        return NULL;
    Node* temp = head;
    head = head->next;

    delete temp;
    // return new node after deletion as head
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

    cout<<"Linked List before Deletion"<<endl;
    linkedListTraversal(head);
    cout<<"Linked List after Deletion"<<endl;
    head = deleteFirstNode(head);
    linkedListTraversal(head);
    
    return 0;
}