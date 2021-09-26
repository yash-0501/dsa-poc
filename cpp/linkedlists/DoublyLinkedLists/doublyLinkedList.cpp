#include <iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* prev;
        Node* next;
};

// Inserting node at front doubly linked list
Node* insertAtFirst(Node* head, int data){
    Node* new_node = new Node();
    new_node->data = data;
    
    new_node->next = head;
    new_node->prev = NULL;
    head->prev=new_node;
    head=new_node;
    return head;
}

//Deleting node from doubly linked list
Node* deleteFromLast(Node* head){
    Node* p = head;
    while(p->next!=NULL){
        p=p->next;
    }
    // at this point p is pointing to second last element
    p->prev->next=NULL;
    delete p;
    return head;
}

// Doubly linked list traversal - forward/reverse
void traversal(Node* head){
    Node* last = new Node();
    cout<<"Forward directon"<<endl;
    while(head!=NULL){
        cout<<head->data<<endl;
        last = head;
        head=head->next;
    }
    cout<<"Reverse Direction"<<endl;
    while(last!=NULL){
        cout<<last->data<<endl;
        last=last->prev;
    }
}


int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Linking head with second - prev -> NULL
    head->data=1;
    head->prev=NULL;
    head->next=second;

    //Linking second with third - prev->Head
    second->data=2;
    second->prev=head;
    second->next=third;

    //Terminating at third node - next->NULL, prev->second  
    third->data=3;
    third->prev=second;
    third->next=NULL;

    cout<<"Orignal Linked List "<<endl;
    traversal(head);
    cout<<endl<<"Linked List after Insertion "<<endl;
    head = insertAtFirst(head,20);
    head = insertAtFirst(head,30);
    traversal(head);
    cout<<endl<<"Linked List after Deletion"<<endl;
    head = deleteFromLast(head);
    head = deleteFromLast(head);
    traversal(head);

    return 0;
}