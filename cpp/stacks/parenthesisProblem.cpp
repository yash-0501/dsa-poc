#include <iostream>
using namespace std;

#define MAX 10

class Stack{
    
    public:
        int top;
        char a[MAX];
        bool isEmpty();
        bool isFull();
        bool push(char x);
        char pop();
        char peek(int pos);
        char stackTop();
        char stackBottom();
    
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

bool Stack::push( char x){
    if(isFull()){
        cout<<"Stack overflow, cannot push"<<endl;
        return false;
    } else{
        a[++top]=x;  
        return true; 
    }
}

char Stack::pop(){
    if(isEmpty()){
        cout<<"Stack underflow"<<endl;
        return -1;
    } else{
        return a[top--];
    }
}


char Stack::peek(int pos){
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
    
char Stack::stackTop(){
    return a[top];
}

char Stack::stackBottom(){
    return a[0];
}

bool parenthesisMatch(string expr){
    Stack* s=new Stack();


    for(int i=0;i<expr.length();i++){
        if(expr[i]=='('){
            s->push(expr[i]);
            continue;
        }
        
        if(expr[i]==')'){
            if(s->isEmpty())
                return false;
            s->pop();
        }
    }
    return (s->isEmpty());

} 

int main(){

    string expr;
    cout<<"Enter a string expression"<<endl;
    cin>>expr;
    if (parenthesisMatch(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
