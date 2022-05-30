// You are given a string s and an integer k. You can choose any character
//  of the string and change it to any other uppercase English character. 
//  You can perform this operation at most k times.

// Return the length of the longest substring containing the same
//  letter you can get after performing the above operations.


// aabaab k=1
 
#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string s, int k){
    int max_len=0, l=0,r=0, maxFreq=0;
    map<char,int> mp;
    while(r<s.length()){
        if(mp.find(s[r])==mp.end()){
            mp.insert(pair<char,int>(s[r],1));
        }else{
            mp[s[r]]+=1;
        }
        maxFreq=max(maxFreq,mp[s[r]]);
        while((r-l+1)-maxFreq > k){
            mp[s[l]]-=1;
            ++l;
        }
        max_len=max(max_len,r-l+1);
        r++;
    }
    return max_len;
}

int main()
{
    string s;
    int k;
    getline(cin,s);
    cin>>k;
    cout<<longestSubstring(s,k);
    return 0;
}