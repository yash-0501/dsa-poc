// Given a string S delete the characters which are appearing more than once consecutively.

#include <bits/stdc++.h>
using namespace std;

void deleteConsecutive(string s){
    vector<char> st;
    int i=0;
    while(i<s.size()-1){
        st.push_back(s[i]);
        if(s[i]==s[i+1])
            st.pop_back();
        i++; 
    }   
    st.push_back(s[s.size()-1]);
    for(auto i:st){
        cout<<i;
    }
    
    
}

int main()
{
    string s;
    getline(cin,s);
    deleteConsecutive(s);
    return 0;
}