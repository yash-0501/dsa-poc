// Given an array of strings strs, group the anagrams together. 
// You can return the answer in any order.


#include <bits/stdc++.h>
using namespace std;



vector<vector <string>> groupAnagrams(vector<string>& strs){
    unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            string t = s; 
            sort(t.begin(), t.end());
            mp[t].push_back(s);
        }
        vector<vector<string>> anagrams;
        for (auto p : mp) { 
            anagrams.push_back(p.second);
        }
        return anagrams;
    }


int main()
{
    vector<string>strs {"bat","cat","ate","eat","tab","act"};
    vector<vector<string>> anagrams = groupAnagrams(strs);
    for(vector<string> i: anagrams){
        for(auto itr: i){
            cout<<itr<<" ";
        }
        cout<<endl;
    }
    return 0;
}