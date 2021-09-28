#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

class Queue{
    public:
        Node* front;
        Node* rear;
        Queue(){
            front=rear=NULL;
        }
        void enqueue(int x);
        void dequeue();
        void display();
};

void Queue::enqueue(int x){
    Node* new_node = new Node();
    new_node->data=x;
    new_node->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=new_node;
        rear->next=front;
    }else {
        rear->next=new_node;
        rear=new_node;
        rear->next=front;
    }
}

void Queue::dequeue(){
    Node* new_node = new Node();
    new_node=front;
    if(front==NULL && rear==NULL){
        cout<<"Underflow/Queue is empty. Cannot perform dequeue operation\n";
    }else if(front==rear){
        front=rear=NULL;
        delete(new_node);
    }   else{
        front=front->next;
        cout<<new_node->data<<" was dequeued.\n";
        delete(new_node);
        rear->next=front;
    }
}

void Queue::display(){
    Node* n=new Node();
    n=front;
    if(front==NULL && rear==NULL){
        cout<<"Queue is empty.\n";
        return;
    }
    do{
        cout<<n->data<<endl;
        n=n->next;
    }while(n!=front);
}

int main()
{
    Queue* q=new Queue();
    cout<<"Queue initially: \n";
    q->display();
    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(30);
    q->enqueue(40);
    cout<<"Queue after enqueue: \n";
    q->display();
    q->dequeue();
    cout<<"Queue after dequeue: \n";
    q->display();
    q->dequeue();
    q->dequeue();
    q->dequeue();
    cout<<"Queue after 4 dequeue: \n";
    q->display();
    cout<<"5th dequeue: \n";
    q->dequeue();
    
    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(30);
    q->enqueue(40);
    q->enqueue(50);
    q->enqueue(60);
    cout<<"final queue:\n";
    q->display();


    return 0;
}