#include <iostream>
#include <string>
using namespace std;

//---------Classes and Objects-----------
class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s)
    {
        this->name = n;
        this->salary = s;
    }

    // this keyword =  to access the  running obj
    void printDetails()
    {
        cout << "The  name of employee is " << this->name << endl;
        cout << "The  salary of " << this->name << " is " << this->salary << endl;
    }
};

class Programmer : public Employee{
    public: 
        int errors; 
};

int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << "Hello World" << endl;
    cout << "Grind starts 14/9/2021" << endl;

    /* hello world program
    runs here */
    int a, b, c;
    short sa = 10;
    long lg;
    long long llg;
    cout << "This is a short variable " << sa << endl;

    float const score = 35.32; //constant variable
    double score1 = 45.3232;
    long double score2 = 32234.32442;
    cout << "Float Variable " << score << endl;

    //---------------Input from user-----------
    int n1, n2;
    cout << "Enter a number" << endl;
    cin >> n1;

    cout << "Enter another number" << endl;
    cin >> n2;

    cout << "n1+n2= " << add(n1, n2) << endl;
    cout << "n1-n2= " << n1 - n2 << endl;
    cout << "n1*n2= " << n1 * n2 << endl;
    cout << "n1/n2= " << (float)n1 / n2 << endl; //type casting

    //----------------If else-------------
    if (n1 > n2)
    {
        cout << "Greater number is " << n1 << endl;
    }
    else if (n1 == n2)
    {
        cout << "Numbers are equal" << endl;
    }
    else
    {
        cout << "Greater number is " << n2 << endl;
    }

    //----------------switch case----------------
    switch (n1)
    {
    case 10:
        cout << "You enetered 10" << endl;
        // break;
    case 18:
        cout << "You enetered 18" << endl;
        break;
    default:
        cout << "You enetered neither 10 nor 18" << endl;
        break;
    }

    //---------------Loops - while, do while & for------------
    int index = 0;
    while (index <= 5)
    {
        // cout<<"Index is "<<index<<endl;
        index += 1;
    }

    do
    {
        // cout<<"Index is "<<index<<endl;
        index -= 1;
    } while (index > 4);

    int i;
    for (i = 0; i < 5; i++)
    {
        // cout<<"i = "<<i+1<<endl;
    }

    //---------------1D arrays----------------
    int arr[34];
    // int arr[3]={1,2,3};
    int arr1[] = {1, 2, 3};
    cout << arr1[2] << endl;

    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks of " << i + 1 << "th student." << endl;
        cin >> marks[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks of " << i + 1 << "th student is " << marks[i] << endl;
    }

    // --------------2D ARRAYS---------------
    int arr2d[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Value at " << i << "," << j << " is " << arr2d[i][j] << endl;
        }
    }

    // ------------Strings------------
    string name = "yash agarwal";
    cout << "The name is " << name << endl;
    cout << "The length of name is " << name.length() << endl;
    cout << "The substring is " << name.substr(0, 4) << endl; //gives 4 characters starting from 0

    //-------------pointers---------------
    // stores address of a var

    int a1 = 34;
    int *ptra;
    ptra = &a1;

    cout << "The value of a is " << a1 << endl;
    cout << "The value of a is " << *ptra << endl; //dereference the pointer
    cout << "The address of a is " << &a1 << endl;
    cout << "The address of a is " << ptra << endl;



    // object is created
    Employee emp1("Yash Agarwal", 50000);   //with constructor
    emp1.printDetails();
    
    
    // without constructor
    // Employee emp2;
    // emp2.name = "Yash"; 
    // emp2.salary = 10000;
    // emp2.printDetails();
    
    
    
    return 0;
}