#include <iostream>

using namespace std;

class Fruct
{
    string denumire;
public:
    Fruct(){}
    Fruct(string denumire)
    {
        this->denumire=denumire;
    }
    void set_denumire(string denumire)
    {
        this->denumire=denumire;
    }
    string get_denumire()
    {
        return denumire;
    }
};

class Leguma
{
    string denumire;
public:
    Leguma();
    Leguma(string);
    void set_denumire(string);
    string get_denumire();
};

int main()
{
    Fruct a,b("mar");
    Leguma c,d("castravete");
    a.set_denumire("pruna");
    c.set_denumire("rosie");
    cout<<"Fructe: "<<a.get_denumire()<<" si "<<b.get_denumire()<<endl;
    cout<<"Legume: "<<c.get_denumire()<<" si "<<d.get_denumire()<<endl;
    return 0;
}

Leguma::Leguma(){}
Leguma::Leguma(string denumire)
{
    this->denumire=denumire;
}

void Leguma::set_denumire(string denumire)
{
    this->denumire=denumire;
}

string Leguma::get_denumire()
{
    return denumire;
}
