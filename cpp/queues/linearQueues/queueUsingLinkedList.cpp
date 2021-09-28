#include <iostream>
using namespace std;

// Linked list node definition
class Node{
    public:
        int data;
        Node* next;
};

// Queue data structure definition
class Queue{
    public:
        Node* front; //Pointing towards the head
        Node* rear; //Pointing towards the tail
        Queue(){
            front=rear=NULL;
        }
        void enqueue(int x);
        void display();
        void dequeue();
        void peek();
};

// -------- Enqueue function using linked lists ------------
void Queue::enqueue(int x){
    Node* new_node = new Node();
    new_node->data = x;
    new_node->next = NULL;
    if(front==NULL && rear==NULL){
        front=rear=new_node;
    } else{
        rear->next=new_node;
        rear=new_node;
    }
    cout<<x<<" was enqueued. \n";
}

// -----------dequeue function using linked lists ------------
void Queue::dequeue(){
    Node* new_node = new Node();
    new_node = front;
    if(front==NULL){
        cout<<"Underflow"<<endl;
    }else{
        // dequeue from the front
        front = front->next;
        cout<<new_node->data<<" was dequeued.\n";
        delete(new_node);
        // If front becomes NULL, then
        // change rear also as NULL
        if (front == NULL)
            rear = NULL;
    }
    
}

//---------------  Display queue elements  -----------
void Queue::display(){
    Node* temp = new Node();
    if(front==NULL && rear==NULL){
        cout<<"Queue is empty\n";
    } else{
        temp=front;
        while(temp!=NULL){
            cout<<"Element is: "<<temp->data<<endl;
            temp=temp->next;
        }
    }
}


void Queue::peek(){
    if(front==NULL && rear==NULL){
        cout<<"Queue is empty \n";
    }
    else{
        cout<<front->data<<endl;
    }
}


int main(){
    Queue* q= new Queue();
    cout<<"Intial queue: \n";
    q->display();
    
    q->enqueue(0);
    q->enqueue(10);
    q->enqueue(20);
    
    cout<<"Queue after enqueue: \n";
    q->display();

    q->dequeue();
    q->dequeue();
    q->dequeue();
    cout<<"Queue after dequeue: \n";
    q->display();

    cout<<"Final queue: \n";
    q->enqueue(1000);
    q->enqueue(100);
    q->enqueue(200);
    q->enqueue(120);
    q->enqueue(130);
    q->enqueue(240);
    q->enqueue(40);
    q->enqueue(50);
    q->enqueue(60);
    q->display();

    cout<<"Peek before dequeue: \n";
    q->peek();
    cout<<"Peek after dequeue: \n";
    q->dequeue();
    q->peek();

    return 0;
}
