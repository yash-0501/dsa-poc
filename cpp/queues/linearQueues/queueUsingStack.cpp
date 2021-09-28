#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1,s2;
    public:
    void enqueue(int x){
        s1.push(x);
    }
    void dequeue(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty\n";
            return;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        cout<<x<<" was dequeued.\n";
    }
    
};

int main()
{
    Queue* q=new Queue();
    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(30);
    q->enqueue(40);
    q->enqueue(50);

    q->dequeue();
    q->dequeue();
    q->dequeue();
    q->dequeue();
    q->dequeue();
    q->dequeue();
    return 0;
}