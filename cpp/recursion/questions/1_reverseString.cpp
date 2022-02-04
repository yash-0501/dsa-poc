/* Reverse a string using recursion */

#include <bits/stdc++.h>
using namespace std;

void reverseString(string s){
    if(s.length()==0){
        return;
    }
    // 1st way
    // cout<<s[s.length()-1];
    // s.pop_back();
    // reverseString(s);

    reverseString(s.substr(1));
    cout<<s[0];

    
}

int main()
{
    reverseString("Binod");
    return 0;
}