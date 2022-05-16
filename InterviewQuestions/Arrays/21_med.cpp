// Find minimum number of merge operations to make an array palindrome

#include <bits/stdc++.h>
using namespace std;

void getOperations(vector<int> nums)
{
    int i = 0, j = nums.size() - 1;
    int count = 0;
    while (i < j)
    {
        if (nums[i] == nums[j])
        {
            i++;
            j--;
        }
        else if (nums[i] > nums[j])
        {
            j--;
            nums[j] = nums[j] + nums[j + 1];
            count++;
        }
        else
        {
            i++;
            nums[i] = nums[i] + nums[i - 1];
            count++;
        }
    }
    cout << count;
}

int main()
{
    vector<int> nums {1,10,10,11,10};
    getOperations(nums);
    return 0;
}