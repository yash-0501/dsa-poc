// Write a C function to return minimum and maximum in an array.
// Your program should make the minimum number of comparisons.

#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    int i;

    if (n % 2 == 0)
    {
        if (arr[0] > arr[1])
        {
            minmax.max = arr[0];
            minmax.min = arr[1];
        }
        else
        {
            minmax.max = arr[1];
            minmax.min = arr[0];
        }

        i = 2; // since first two compared.
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        i = 1; // since only 0th element is checked.
    }

    while (i < n - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > minmax.max)
                minmax.max = arr[i];
            if (arr[i + 1] < minmax.min)
                minmax.min = arr[i + 1];
        }
        else
        {
            if (arr[i + 1] > minmax.max)
                minmax.max = arr[i + 1];
            if (arr[i] < minmax.min)
                minmax.min = arr[i];
        }
        i += 2;
    }
    return minmax;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Pair minMax = getMinMax(a, n);
    cout << "Minimum: " << minMax.min << "\nMaximum: " << minMax.max;
    return 0;
}