// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;
    int n = s.length();
    int counts[26] = {0};
    for (int i = 0; i < n; i++)
    {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
        if (counts[i])
            return false;
    return true;
}

int main()
{
    string s, t;
    getline(cin,s);
    getline(cin,t);
    cout<<checkAnagram(s,t);
    return 0;
}