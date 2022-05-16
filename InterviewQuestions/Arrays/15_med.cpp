// Given the array nums after the possible rotation and an integer target,
// return the index of target if it is in nums, or -1 if it is not in nums.

#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &a, int key)
{
    int l = 0;
    int r = a.size() - 1;
    int mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (a[mid] == key)
        {
            return mid;
        }

        if (a[l] < a[mid])
        {
            if (mid > l && key >= a[l] && key <= a[mid - 1])
                r = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if (mid < r && key >= a[mid + 1] && key <= a[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> a{1};
    int target = 0;
    cout << find(a, target);
    return 0;
}