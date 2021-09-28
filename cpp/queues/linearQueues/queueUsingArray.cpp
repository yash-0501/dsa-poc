#include <iostream>
using namespace std;

#define n 5

class Queue{
    public: 
        int front=-1;
        int rear=-1;
        int arr[n];
        void enqueue(int x);
        void dequeue();
        void display();
        void peek();
};


void Queue::peek(){
    if(front==-1&&rear==-1){
        cout<<"Queue is empty"<<endl;
    } else{
        cout<<"Peek: "<<arr[front]<<endl;
    }
}


void Queue::display(){
    int f=front, r=rear;
    if(f==-1&&r==-1){
        cout<<"Queue is empty"<<endl;
    } else{
        while(f<r+1){
            cout<<"Element at "<<f<<" is "<<arr[f++]<<endl;
        }
    }
}

void Queue::dequeue(){
    if(front==-1 && rear==-1){
        cout<<"Underflow"<<endl;
    } else if(front==rear){
        cout<<arr[front++]<<" was dequeued from the queue"<<endl;
        front=rear=-1;
    }else{
        cout<<arr[front++]<<" was dequeued from the queue"<<endl;
    }
}


void Queue::enqueue(int x){
    if(rear == n-1){
        cout<<"Queue overflow"<<endl;
    }else if(front==-1 && rear==-1){
        front=rear=0;
        arr[rear]=x;
    }else{
        arr[++rear]=x;
    }
}


int main(){
    Queue* q = new Queue();
    cout<<"Before enqueue"<<endl;
    q->display();
    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(30);
    q->enqueue(40);
    q->enqueue(50);
    cout<<endl<<"After enqueue"<<endl;
    q->display();
    q->dequeue();
    q->dequeue();
    q->dequeue();
    cout<<endl<<"After dequeue"<<endl;
    q->display();
    q->peek();



    return 0;
    
}