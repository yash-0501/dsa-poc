//Space optimization using bit manipulations

//Given two numbers say a and b, mark the multiples 
//of 2 and 5 between a and b using less than O(|b – a|) space and output each of the multiples. 


// a=2,b=10
//2 4 5 6 8 10

#include <bits/stdc++.h>
using namespace std;

void printMultiples(int a, int b){
    vector<int> result((b-a)+1,0);
    for (int i = a; i <= b; i++)
        if (i % 2 == 0 || i % 5 == 0)
            result[i - a] = 1;
            
    for (int i = a; i <= b; i++)
        if (result[i - a] == 1)
            cout << i << " ";
}

int main()
{
    printMultiples(2,10);
    return 0;
}