/*

Isyana is given the number of visitors at her local
theme park on N consecutive days. The number of visitors
on the i-th day is V(i). A day is record-breaking if it
satisfies both of the following conditions:

1->The number of visitors on the day is strictly larger than
the number of visitors on each of the previous days.

2->Either it is the last day, or the number of visitors on the
day is strictly larger than the number of visitors on the following day.

Note that the very first day could be a record-breaking day.
Please help Isyana find out the number of record-breaking days.



Input: The first line of the input gives the number of test cases, T.
T test cases follow. Each test case begins with a line
containing the integer N. The second line contains N integers.
The i-th integer is Vi.

Output: For each test case, output one line containing Case #x: y,
where x is the test case number (starting from 1) and y is
the number of record-breaking days.

Limits

Time limit: 20 seconds per test set.

Memory limit: 1GB.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        a.push_back(input);
    }

    int count = 0; // count the record breaking days
    int high = a[0];
    int flag = 0;

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    // 2nd condition - larger than following day

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1]) // larger than following day
        {
            if (i == 1) // Base case - day 1
                count++;
            else
            {
                flag = 1;
            }
        } else{
            flag=0;
        }
        // 1st Condition - larger than prev days
        if (a[i - 1] > high)
        {
            if ((i != n - 1) && flag == 1)
            {
                count++;
                high = a[i - 1];
            }
            // Last day
            else if (i == n - 1 && high < a[i])
            { 
                count++;
                high = a[i-1];
            }
        }
    }
    cout << count;

    return 0;
}