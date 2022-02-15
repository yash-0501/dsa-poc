#include <bits/stdc++.h>
using namespace std;

class base{
    public:
        virtual void print(){
            cout<<"Base Class \n";
        }
        void display(){
            cout<<"Display function base class \n";
        }
};

class derived: public base{
    public:
        void print(){
            cout<<"Derived Class \n";
        }
        void display(){
            cout<<"Display function derived class \n";
        }
};

int main()
{
    base *basePtr;
    derived d;
    basePtr = &d;

    basePtr ->display();
    basePtr ->print();
    return 0;
}