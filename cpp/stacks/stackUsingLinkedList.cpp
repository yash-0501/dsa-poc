#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

Node* head = new Node();

bool isEmpty(){
    return head == NULL;
}

bool isFull(){
    Node* new_node = new Node();
    if(!new_node){
        cout<<"Heap Overflow"<<endl;
        return true;
    } else{
        return false;
    }
}


void push(int data){
    Node* new_node = new Node();
    if(!new_node){
        cout<<"Heap Overflow"<<endl;
    }
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void pop(){
    if(isEmpty()){
        cout<<"Stack underflow!!"<<endl;
    }else{
        Node* new_node = head;
        head=head->next;
        int x = new_node->data;
        new_node->next=NULL;
        delete new_node;
        cout<<"Popped "<<x<<" from the stack"<<endl;
    }
    
}


//-------------- Linked List Traversal ----------------
void linkedListTraversal(Node* n){
    while(n != NULL){
        cout<<"Element is "<<n->data<<endl;
        n=n->next;
    } 
}


int peek(int pos){
    Node* n=head;
    for(int i=0;(i<pos-1 && n!=NULL);i++){
        n=n->next;
    } if(n!=NULL){
        return n->data;
    }else{
        return -1;
    }
}

int main(){
    head=NULL;
    push(11);
    push(10);
    push(18);
    cout<<"After Push: "<<endl;
    linkedListTraversal(head);
    cout<<"Element at pos 1: "<<peek(1)<<endl;
    cout<<"Element at pos 2: "<<peek(2)<<endl;
    cout<<"Element at pos 3: "<<peek(3)<<endl;
    pop();
    pop();
    cout<<"After pop: "<<endl;
    linkedListTraversal(head);
    cout<<"Element at pos 1: "<<peek(1)<<endl;
    
    return 0;
}