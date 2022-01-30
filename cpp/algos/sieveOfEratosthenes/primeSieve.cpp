#include <bits/stdc++.h>
using namespace std;

void primeSieve(int n)
{
    int prime[n + 1];
    memset(prime, 0, sizeof(prime));

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    primeSieve(30);
    return 0;
}