#include<iostream>
using namespace std;

#define n 5

class deque{
    public:
        int arr[n];
        int front=-1, rear=-1;
        void enqueueFront(int x);
        void enqueueRear(int x);
        void dequeueFront();
        void dequeueRear();
        void display();
};

void deque::display(){
    int i=front;
    if(front == -1 && rear== -1){
        cout<<"deque is empty.\n";
    }else{
        while(i!=rear){
            cout<<arr[i]<<endl;
            i=(i+1)%n;
        }
        cout<<arr[rear]<<endl;
    }

}


void deque::enqueueFront(int x){
    // Overflow condition
    if((rear+1)%n==front){
        cout<<"deque is full.\n";
        return;
    } else if(front == -1 && rear== -1){
        front=rear=0;
    }else if(front==0){
        front=n-1;
    }else{
        front--;
    }
    arr[front]=x;
}

void deque::enqueueRear(int x){
    // Overflow condition
    if((rear+1)%n==front){
        cout<<"deque is full.\n";
        return;
    } else if(front == -1 && rear== -1){
        front=rear=0;
    }else if(rear==n-1){
        front=0;
    }else{
        rear++;
    }
    arr[rear]=x;
}

void deque::dequeueFront(){
    //Underflow condition
    if(front == -1 && rear== -1){
        cout<<"deque is empty.\n";
    }else if(front==rear){  
        cout<<arr[front]<<" was dequeued.\n";
        front=rear=-1;
    }else if(front == n-1){
        cout<<arr[front]<<" was dequeued.\n";
        front=0;
    }else{
        cout<<arr[front]<<" was dequeued.\n";
        front++;
    }
}

void deque::dequeueRear(){
    //Underflow condition
    if(front == -1 && rear== -1){
        cout<<"deque is empty.\n";
    }else if(front==rear){  
        cout<<arr[rear]<<" was dequeued.\n";
        front=rear=-1;
    }else if(front == 0){
        cout<<arr[rear]<<" was dequeued.\n";
        rear=n-1;
    }else{
        cout<<arr[rear]<<" was dequeued.\n";
        rear--;
    }
}


int main()
{
    deque* dq=new deque();
    dq->enqueueFront(2);
    dq->enqueueFront(5);
    dq->enqueueRear(-1);
    dq->enqueueRear(0);
    dq->enqueueFront(7);
    dq->enqueueFront(4);
    dq->display();
    dq->dequeueFront();
    dq->dequeueRear();
    dq->dequeueFront();
    dq->display();
    return 0;
}