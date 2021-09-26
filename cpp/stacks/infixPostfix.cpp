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

int precedence(char ch){
    if(ch == '*' || ch=='/')
        return 3;
    else if(ch == '+' || ch=='-')
        return 2; 
    else
        return 0;
}

int isOperator(char ch){
    if(ch=='+' || ch=='-' ||ch=='*' || ch=='/') 
        return 1;
    else
        return 0;
}

void infixToPostfix(string expr){
    Stack* s = new Stack();
    int n = expr.length();
    string postfix;
    char ch;
    int i;
    for(i=0;i<n;i++){
        ch=expr[i];
        if(!isOperator(ch)){
            postfix+=ch;
        } else{
            if(s->isEmpty()){
                s->push(ch);
            }
            else {
                while(precedence(ch)<=precedence(s->stackTop())){
                postfix+= s->pop();
            }
            s->push(ch);
            }
        }
    }
    while(!s->isEmpty()){
        postfix+=s->stackTop();
        s->pop();
    }
    cout<<"Postfix expression: "<<postfix<<endl;
}

int main(){

    string expr = "x-y/z-k*d";
    infixToPostfix(expr);
    // cout<<"Enter a string expression"<<endl;
    // cin>>expr;
    
    return 0;
}
