// Print all the duplicates in the input string

#include <bits/stdc++.h>
using namespace std;

void printDuplicates(string s){
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i]) == mp.end()){
            mp.insert(pair<char,int>(s[i],1));
        }else{
            mp[s[i]]++;
        }
    }
    map<char, int>::iterator itr;
    for(itr=mp.begin();itr!=mp.end();itr++){
        if(itr->second > 1){
            cout<<itr->first;
        }
    }
}

int main()
{
    string s;
    getline(cin,s);
    printDuplicates(s);
    return 0;
}