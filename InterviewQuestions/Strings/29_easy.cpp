// Given a string s containing just the characters
// '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

#include <bits/stdc++.h>
using namespace std;

bool checkParenthesis(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            if (st.empty() || st.top() != '(')
                return false;
            else if (st.top() == '(')
                st.pop();
        }
        else if (s[i] == '}')
        {
            if (st.empty() || st.top() != '{')
                return false;
            else if (st.top() == '{')
                st.pop();
        }
        else if (s[i] == ']')
        {
            if (st.empty() || st.top() != '[')
                return false;
            else if (st.top() == '[')
                st.pop();
        }
    }
    return (st.empty());
}

int main()
{
    string s;
    getline(cin, s);
    cout << checkParenthesis(s);
    return 0;
}