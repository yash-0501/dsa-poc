// An element in a sorted array can be found in O(log n) time via binary search.
// But suppose we rotate an ascending order sorted array at some pivot
// unknown to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2.
// Devise a way to find an element in the rotated array in O(log n) time.

#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &a, int l, int r, int key)
{

    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (a[mid] == key)
    {
        return mid;
    }

    if (a[l] <= a[mid])
    {
        if (key >= a[l] && key <= a[mid])
            return find(a, l, mid - 1, key);
        return find(a, mid + 1, r, key);
    }
    if (key >= a[mid] && key <= a[r])
        return find(a, mid + 1, r, key);
    return find(a, l, mid - 1, key);
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
    cout << find(nums, 0, n - 1, key);
    return 0;
}