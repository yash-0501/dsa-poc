/*
If n is a prime number then, from 1 to root(n),
there will be no factor of n

Reduces from O(n) -> O(n^1/2)

Sieve of eratosthenes helps in telling how many numbers
are prime in a given range. (1 to n) 

here also run the loop till root(n) or n^1/2.


*/

#include <bits/stdc++.h>
using namespace std;

void sieve_of_eratosthenes(int n)
{
    bool isPrime[n + 1];
    memset(isPrime, true, sizeof(isPrime)); //set all elements in array to true
    isPrime[0] = false;
    isPrime[1] = false;

    int i;
    for (i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        cout << i << " " << isPrime[i] << endl;
    }
}

int main()
{
    int n = 20;
    sieve_of_eratosthenes(n);
    return 0;
}