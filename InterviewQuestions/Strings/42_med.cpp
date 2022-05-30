// Given an input string (s) and a pattern (p), implement wildcard pattern matching
// with support for '?' and '*' where:

// '?' Matches any single character.
// '*' Matches any sequence of characters (including the empty sequence).
// The matching should cover the entire input string (not partial).


#include <bits/stdc++.h>
using namespace std;

bool wildCard(string s, string p){
    int i=0,j=0;
    while(i<s.size()||j<p.size()){
        if(p[j]=='?'){
            i++;
            j++;
            continue;
        }else if(p[j]=='*'){
            j++;
            while(i<s.size() && p[j]!=s[i]){
                ++i;
            }
            if(i>s.size()){
                return false;
            }
            i++;
            j++;
            continue;
        }else if(p[j]==s[i]){
            i++;
            j++;
        }else if(p[j]!=s[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    string s,p;
    getline(cin,s);
    getline(cin,p);
    cout<<wildCard(s,p);
    return 0;
}