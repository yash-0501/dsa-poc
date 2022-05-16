// Arrange given numbers to form the biggest number

#include <bits/stdc++.h>
using namespace std;

bool compare(long long X, long long Y)
{
    long long XY = X, YX = Y, revX = 0, revY = 0;

    while (X)
    {
        revX = revX * 10 + X % 10;
        X /= 10;
    }

    while (Y)
    {
        revY = revY * 10 + Y % 10;
        Y /= 10;
    }

    while (revY)
    {
        XY = XY * 10 + revY % 10;
        revY /= 10;
    }

    while (revX)
    {
        YX = YX * 10 + revX % 10;
        revX /= 10;
    }

    return XY > YX;
}

int main()
{
    vector<long long> nums{1, 34, 3, 98, 9, 76, 45, 4};
    sort(nums.begin(), nums.end(), compare);

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i];
    return 0;
}