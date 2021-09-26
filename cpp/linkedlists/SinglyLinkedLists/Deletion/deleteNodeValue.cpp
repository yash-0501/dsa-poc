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

// ------------ delete element/node with given vaue ----------------
// this function returns new head
Node* deleteBetween(Node* head, int value){
    
    // Copy head
    Node* p = head;
    Node* q = head->next;

    // if value is present at head
    if(p->data == value){
        head=head->next;
        delete p;
    }
    else{
        while(q->data!=value && q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        delete q;
    }
    }
    
    
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
    head = deleteBetween(head,21);
    linkedListTraversal(head);
    
    return 0;
}