#include <bits/stdc++.h>
using namespace std;


bool parenthesisMatch(string expr){
    stack<char> s;


    for(int i=0;i<expr.length();i++){
        if(expr[i]=='(' || expr[i]=='{' || expr[i]=='['){
            s.push(expr[i]);
            continue;
        }
        
        if(expr[i]==')'){
            if(s.empty() || s.top()!='(')
                return false;
            else if(s.top()=='(')
                s.pop();
        }
        else if(expr[i]=='}'){
            if(s.empty() || s.top()!='{')
                return false;
            else if(s.top()=='{')
                s.pop();
        }
        else if(expr[i]==']'){
            if(s.empty() || s.top()!='[')
                return false;
            else if(s.top()=='[')
                s.pop();
        }
    }
    return (s.empty());

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
