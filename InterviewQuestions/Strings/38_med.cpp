// Given a string s, return the number of palindromic substrings in it.

#include <bits/stdc++.h>
using namespace std;

int largestPalindromeSubstring(string s)
{
    bool dp[s.size()][s.size()];
    int count = 0;
    for (int g = 0; g < s.length(); g++)
    {
        for (int i = 0, j = g; j < s.length(); i++, j++)
        {
            if (g == 0)
            {
                dp[i][j] = true;
            }
            else if (g == 1)
            {
                dp[i][j] = s[i] == s[j] ? true : false;
            }
            else
            {
                if (s[i] == s[j] and dp[i + 1][j - 1] == true)
                    dp[i][j] = true;
                else
                    dp[i][j] = false;
            }
            if (dp[i][j])
                count += 1;
        }
    }

    return count;
}

int main()
{
    string s = "aaa";
    cout << largestPalindromeSubstring(s);
    return 0;
}