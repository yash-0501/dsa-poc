// Given a string s, return true if it is a palindrome, or false otherwise.

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s){
    int i=0, j=s.size()-1;
    if(s.empty())
        return true;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    while(i<j){
        while(!isalnum(s[i]) && i<j)i++;
        while(!isalnum(s[j]) && i<j )j--;

        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);
    cout<<checkPalindrome(s);
    return 0;
}