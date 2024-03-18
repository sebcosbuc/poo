#include <iostream>

using namespace std;

class Complex
{
    double a,b;
public:
    Complex(){}
    Complex(double a,double b):a(a),b(b){}
    void afisare()
    {
        if(b>=0)
            cout<<a<<"+"<<b<<"i"<<endl;
        else
            cout<<a<<b<<"i"<<endl;
    }
    Complex operator+ (const Complex& param)
    {
        Complex rez;
        rez.a = this->a + param.a;
        rez.b = this->b + param.b;
        return rez;
    }
};
int main()
{
    Complex z1(3,5), z2(-2,-7), z3;
    cout<<"z1: ";
    z1.afisare();
    cout<<"z2: ";
    z2.afisare();
    z3=z1+z2;
    cout<<"z3: ";
    z3.afisare();
    return 0;
}
