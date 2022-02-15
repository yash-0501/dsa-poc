#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        Complex(int r, int i){
            real=r;
            imag=i;
        }
        Complex(){
            real=2;
            imag=1;
        }
        Complex operator + (Complex const &obj){
            Complex res;
            res.imag = imag+obj.imag;
            res.real = real+obj.real;
            return res;
        }
        void display(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
};

int main()
{
    Complex c1(12,7), c2(6,7);
    Complex c3 = c1+c2;
    c3.display();
    return 0;
}