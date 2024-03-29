#include <bits/stdc++.h>
using namespace std;

class queues{
    stack<int> s1;
    
    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;
        
    }
    bool empty(){
        if(s1.empty()){
            cout<<"Queue is empty"<<endl;
            return 1;
        }
        cout<<"Queue is not empty"<<endl;
        return 0;
    }
};

int main()
{
    queues q;
    cout<<q.empty()<<endl;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}