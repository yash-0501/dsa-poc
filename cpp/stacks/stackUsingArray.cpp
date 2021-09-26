#include <iostream>
using namespace std;

#define MAX 10

class Stack{
    
    public:
        int top;
        int a[MAX];
        bool isEmpty();
        bool isFull();
        bool push(int x);
        int pop();
        int peek(int pos);
        int stackTop();
        int stackBottom();
    
        // parameterised constructor
        Stack(){
            top=-1;
            }
};

// member function definitions
bool Stack::isEmpty(){
    if(top==-1){
        return true;
    }    
    else{
        return false;
    }
}

bool Stack::isFull(){
    if(top==MAX-1){
        return true;
    } else{
        return false;
    }
}

bool Stack::push( int x){
    if(isFull()){
        cout<<"Stack overflow, cannot push"<<endl;
        return false;
    } else{
        a[++top]=x;  
        cout<<"Pushed "<<x<<" to stack."<<endl;
        return true; 
    }
}

int Stack::pop(){
    if(isEmpty()){
        cout<<"Stack underflow"<<endl;
        return -1;
    } else{
        return a[top--];
    }
}


int Stack::peek(int pos){
    if(isEmpty()){
        return -1;
    } else{
        if(top-pos+1<0){
            cout<<"Not valid position"<<endl;
            return -1;
        } else{
            return a[top-pos+1];
        }
    }
    return a[top];
}
    
int Stack::stackTop(){
    return a[top];
}

int Stack::stackBottom(){
    return a[0];
}



int main(){

    Stack* s=new Stack;

    // Check if stack is empty
    if(s->isEmpty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }

    // Push an element to stack
    s->push(10);
    s->push(110);
    s->push(5);
    s->push(103);
    s->push(1104);
    s->push(51);
    s->push(1022);
    s->push(11011);
    s->push(500);
    s->push(5000);

    // Check if stack is Full
    if(s->isFull()){
        cout<<"Stack is full"<<endl;
    }else{
        cout<<"Stack is not full"<<endl;
    }

    for (int i=1;i<=s->top+1;i++){
        cout<<"Value at position: "<<i<<" is: "<<s->peek(i)<<endl;
    }
    
    // pop an element from stack
    cout<<s->pop()<<"  Popped from stack"<<endl;
    cout<<s->pop()<<"  Popped from stack"<<endl;
    
    for (int i=1;i<=s->top+1;i++){
        cout<<"Value at position: "<<i<<" is: "<<s->peek(i)<<endl;
    }

    if(s->isFull()){
        cout<<"Stack is full"<<endl;
    }else{
        cout<<"Stack is not full"<<endl;
    }

    cout<<"Top: "<<s->stackTop()<<endl;
    cout<<"Bottom: "<<s->stackBottom()<<endl;

    return 0;
}
