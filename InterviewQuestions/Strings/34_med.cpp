// Given a string s, find the length of the longest substring without repeating characters.

#include <bits/stdc++.h>
using namespace std;

int subString(string s){

    map<char,int> mp; //stores - character,position
    int l=0,r=0,len=0;
    
    while(r<s.size()){
        if(mp.find(s[r])!=mp.end())  //if present in map
            l = max(mp[s[r]]+1,l);
        else
            mp.insert(pair<char,int>(s[r],r));
        mp[s[r]]=r;
        len = max(len,r-l+1);
        r++;

    }
    return len;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<subString(s);
    return 0;
}