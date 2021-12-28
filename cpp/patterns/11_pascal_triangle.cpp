/*

        1
       1 1 
      1 2 1
     1 3 3 1
    1 4 6 4 1


*/

#include <iostream>
using namespace std;

int fact(int n){
    return (n<=1)?1:n*fact(n-1);
}

int main()
{
    int n;
    cout << "Enter value of n.";
    cin >> n;
    int coef=1;
    for (int i = 0; i < n; i++)
    {
        for(int space=0;space<=n-i-1;space++){
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
         cout<<fact(i)/(fact(j)*(fact(i-j)))<<" ";   // iCj 
        }
        cout << endl;
    }
    return 0;
}