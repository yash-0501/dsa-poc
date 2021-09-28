#include <iostream>
using namespace std;

#define n 5

class Queue{
    public:
        int rear=-1;
        int front=-1;
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
        while(f!=r){
            cout<<"Element at "<<f<<" is "<<arr[f]<<endl;
            f=(f+1)%n;
        }
            cout<<"Element at "<<f<<" is "<<arr[f]<<endl;

    }
}

void Queue::enqueue(int x){
    // When queue is empty
    if(front == -1 && rear == -1){
        front = rear = 0;
        arr[rear]=x;
    }
    // When queue is full 
    else if(((rear+1)%n)==front){
        cout<<"Queue is full"<<endl;
    } else{
        rear=(rear+1)%n;
        arr[rear]=x;
    }
}


void Queue::dequeue(){
    if(front==-1 && rear==-1){
        cout<<"Queue is empty.\n";
    }
    else if(front==rear){
        cout<<arr[front]<<" was dequeued.\n";
        front=rear=-1;
    }else{
        cout<<arr[front]<<" was dequeued.\n";
        front=(front+1)%n;
    }
}



int main(){
    Queue* q=new Queue();
    cout<<"Initial queue:\n";
    q->display();
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->enqueue(5);
    cout<<"After  enqueue:\n";
    q->display();
    q->dequeue();
    q->dequeue();
    cout<<"After 2 dequeue:\n";
    q->display();
    cout<<"After enqueue:\n";
    q->enqueue(6);
    q->enqueue(7);
    q->display();
    cout<<"After full queue when enqueued:\n";
    q->enqueue(8);
    q->dequeue();
    q->peek();
    q->display();
    return 0;   
}