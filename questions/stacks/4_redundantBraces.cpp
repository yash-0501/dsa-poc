/*
Input: ((a+b))
Output: 1

Input: (a*(b+c))
Output: 0

*/

#include <bits/stdc++.h>
using namespace std;

bool checkBraces(string s){
    stack<char> st;
    bool ans=false;
    int i=0;
    while(i!=s.length()){
        if(s[i]=='('){
            st.push(s[i]);
        }else if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
            st.push(s[i]);
        }else if(s[i]==')'){
            if(st.top()=='('){
                ans=true;
            }
            while(st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/'){
                st.pop();
            }
            st.pop();
        }
        i++;
    }
    return ans;
}


int main()
{
    string s;
    cin>>s;
    cout<<checkBraces(s);
    return 0;
}