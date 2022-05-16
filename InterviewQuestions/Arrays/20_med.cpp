// Given a set of time intervals in any order, merge all overlapping intervals
// into one and output the result which should have only mutually exclusive
// intervals. Let the intervals be represented as pairs of integers for simplicity.
// For example, let the given set of intervals be {{1,3}, {2,4}, {5,7}, {6,8}}.
// The intervals {1,3} and {2,4} overlap with each other, so they should be merged
// and become {1, 4}. Similarly, {5, 7} and {6, 8} should be merged and become {5, 8}

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> merged;
    sort(intervals.begin(), intervals.end());
    for (auto interval : intervals)
    {
        if (merged.empty() || merged.back()[1] < interval[0])
        {
            merged.push_back(interval);
        }
        else
        {
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }
    return merged;
}

int main()
{
    vector<vector<int>> intervals{{1, 3}, {2, 6}, {7, 10}, {15, 18}};
    intervals = mergeIntervals(intervals);
    for(auto interval:intervals){
        cout<<interval[0]<<" "<<interval[1]<<endl;
    }
    return 0;
}