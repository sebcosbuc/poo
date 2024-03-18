#include <iostream>

using namespace std;

class Fruct
{
    string denumire;
    double cantitate, pret_unitar;
public:
    Fruct(string denumire, double cantitate, double pret_unitar):
    denumire(denumire),
    cantitate(cantitate),
    pret_unitar(pret_unitar){}

    bool operator>(Fruct& param)
    {
        return (this->cantitate*this->pret_unitar)>(param.cantitate*param.pret_unitar);
    }
    string get_denumire()
    {
        return denumire;
    }
};

int main()
{
    Fruct x("pepeni",5,1.5),y("mere",3,3.99);
    if(x>y)
    {
        cout<<x.get_denumire()<<" valoreaza mai mut decat "<<y.get_denumire();
    }
    else
    {
        cout<<y.get_denumire()<<" valoreaza mai mut decat "<<x.get_denumire();

    }
    return 0;
}
