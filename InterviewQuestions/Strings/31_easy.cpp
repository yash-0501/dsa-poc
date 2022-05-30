// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string ""

#include <bits/stdc++.h>
using namespace std;

string commonPrefix(vector<string>& strs){
    int n = strs.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(begin(strs), end(strs));
        string a = strs[0];
        string b = strs[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;

}

int main()
{
    vector<string> strs{"flower","flow","flight"};
    cout<<commonPrefix(strs);
    return 0;
}