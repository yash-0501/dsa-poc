#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

//-------------- Linked List Traversal ----------------
void linkedListTraversal(Node* head){
    Node* n = head;
    do{
        cout<<"Element is "<<n->data<<endl;
        n=n->next;
    }while(n != head);
    
}


// ------------ Linked List Creation -------------
int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;

    // allocated in heap
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    // Assign 7 to data of first/head Node
    head->data=7;
    // Linking first and second Node
    head->next=second;
    
    // Assign 21 to data of second Node
    second->data=21;
    // Linking second and third Node
    second->next=third;
    
    // Linking third and fourth Node
    third->data=35;
    // NULL
    third->next=fourth;
    
    // Linking fourth to HEAD Node
    fourth->data=45;
    // NULL
    fourth->next=head;

    linkedListTraversal(head);
    return 0;
}