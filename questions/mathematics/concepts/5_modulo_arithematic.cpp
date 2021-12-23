/*

(a+b)%n = (a%n+b%n)%n
(a*b)%n = (a%n*b%n)%n

*/

#include <iostream>
using namespace std;

int fastPower(int a, int b)
{
    int res = 1;
    while (b > 0)
    {
        if ((b & 1) != 0) //checking if it is odd b%2==1 or b%2!=0
        {
            res = res * a;
        }
        a = a * a;
        b = b >> 1; // b/2
    }
    return res;
}

//When the result is very big use a^b%n
//where n = 10^9-7
long long fastPower2(long long a,long long b, int n)
{
    long long res = 1;
    while (b > 0)
    {
        if ((b & 1) != 0) //checking if it is odd b%2==1 or b%2!=0
        {
            res = (res * a % n) % n;
        }
        a = (a % n * a % n) % n;
        b = b >> 1; // b/2
    }
    return res;
}

int main()
{
    int a = 5, b = 4;
    cout << fastPower(a, b)<<endl;
    long long a2 = 3978432, b2 = 5;
    int n = 1000000007;
    cout << fastPower2(a2, b2, n);
    return 0;
}