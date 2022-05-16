// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]]
// such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> getTriplets(vector<int> nums)
{
    int i, j, k;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    for (i = 0; i < n; i++)
    {
        // skip duplicate -> 1
        if (i == 0 || nums[i - 1] != nums[i])
        {
            int a = nums[i];
            j = i + 1;
            k = nums.size() - 1;
            int newTarget = 0 - a;
            while (j < k)
            {
                if (nums[j] + nums[k] > newTarget)
                {
                    k--;
                }
                else if (nums[j] + nums[k] < newTarget)
                {
                    j++;
                }
                else
                {
                    vector<int> arr{nums[i], nums[j], nums[k]};
                    result.push_back(arr);
                    // skip duplicate -> 2
                    while (j < k && nums[j] == nums[j + 1])
                        j++;
                    // skip duplicate -> 3
                    while (j < k && nums[k] == nums[k - 1])
                        k--;

                    j++;
                    k--;
                }
            }
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = getTriplets(nums);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}