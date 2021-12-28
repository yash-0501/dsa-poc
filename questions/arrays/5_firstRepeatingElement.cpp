/*

Given an array arr[] of size n,
find the first repeating element.
The element should occurs more than
once and the index of its first
occurrence should be the smallest.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int>idx(1e6+2,-1);

    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        
        if (idx[a[i]] != -1)
        {
            minidx = min(minidx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }

    return 0;
}