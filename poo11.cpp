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
    void set_a(double a)
    {
        this->a=a;
    }
    double get_a()
    {
        return a;
    }
    void set_b(double b)
    {
        this->b=b;
    }
    double get_b()
    {
        return b;
    }
};

Complex operator+ (Complex param1, Complex param2)
{
    Complex rez;
    double temp;
    temp=param1.get_a();
    temp=param2.get_a();
    rez.set_a(temp);
    rez.set_b(param1.get_b()+param2.get_b());
    return rez;
}

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
