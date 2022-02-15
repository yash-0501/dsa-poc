//Pop costly
#include <bits/stdc++.h>
using namespace std;

class stacks{
    int N;
    queue<int> q1;
    queue<int> q2;

    
    public:
    void push(int val){
        q1.push(val);
        N++;
        
    }
    void pop(){
        
        
        if(q1.empty()){
            return;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }
    int top(){
        if(q1.empty())
            return -1;
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int res = q1.front();
        q2.push(res);

        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        return res;
    }
};

int main()
{
    stacks s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    
    return 0;
}