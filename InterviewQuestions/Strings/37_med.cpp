// Given a string s, return the longest palindromic substring in s.

#include <bits/stdc++.h>
using namespace std;

string largestPalindromeSubstring(string s){
    bool dp[s.size()][s.size()];
    int ans_i=0,ans_j=0;
    for(int g=0;g<s.length();g++){
        for(int i=0, j=g; j<s.length();i++,j++){
            if(g==0){
                dp[i][j]=true;
                
            }else if(g==1){
                dp[i][j]=s[i]==s[j]?true:false;
            
            }else{
                if(s[i]==s[j] and dp[i+1][j-1]==true)
                    dp[i][j]=true;
                else
                    dp[i][j]=false;
            }   
            if(dp[i][j])
                {ans_i=i;
                ans_j=j;}
        }
    }
    string ans;
   for(int k=ans_i;k<=ans_j;k++){
       ans+=s[k];
   }
   return ans;
}

int main()
{   
    string s = "babad";
    cout<<largestPalindromeSubstring(s);
    return 0;
}