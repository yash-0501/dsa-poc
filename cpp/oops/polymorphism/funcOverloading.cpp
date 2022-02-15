#include <bits/stdc++.h>
using namespace std;

//function overloading

class  baseClass{
  public:
  void fun(){
      cout<<"Funtion w/o any arguments.\n";
  }  
  void fun(int i){
      cout<<"Function with int argument\n";
  }  
  void fun(double i){
      cout<<"Function with double argument\n";
  }
};

int main()
{
    baseClass obj;
    obj.fun();
    obj.fun(3);
    obj.fun(4.5);
    return 0;
}