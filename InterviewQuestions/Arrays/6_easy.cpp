// An element in a sorted array can be found in O(log n) time via binary search.
// But suppose we rotate an ascending order sorted array at some pivot
// unknown to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2.
// Devise a way to find an element in the rotated array in O(log n) time.

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
    int n, key;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    cin >> key;
    cout << find(nums, key);
    return 0;
}