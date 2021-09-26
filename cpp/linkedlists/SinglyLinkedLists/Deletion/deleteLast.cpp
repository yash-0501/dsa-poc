#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void linkedListTraversal(Node* n){
    while(n != NULL){
        cout<<"Element is "<<n->data<<endl;
        n=n->next;
    }
    
}

Node* deleteLast(Node* head){
    Node* p = head;
    Node* q = head->next;

    while(q->next!=NULL){
        q=q->next;
        p=p->next;
    }
    p->next=NULL;
    delete q;
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
    cout<<endl<<"Linked List after Deletion"<<endl;
    head = deleteLast(head);
    linkedListTraversal(head);
    
    return 0;
}