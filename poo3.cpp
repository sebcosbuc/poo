#include <iostream>

using namespace std;

class Autovehicul
{
    string marca, tip;
public:
    Autovehicul(string marca, string tip)
    {
        this->marca=marca;
        this->tip=tip;
    }
    string to_string()
    {
        return marca+" "+tip;
    }
};

class Barca
{
    string marca, tip;
public:
    Barca(string marca, string tip): marca(marca), tip(tip) {}
    string to_string()
    {
        return marca+" "+tip;
    }
};

class Avion
{
    string marca, tip;
public:
    Avion(string marca, string tip): marca(marca)
    {
        this->tip=tip;
    }
    string to_string()
    {
        return marca+" "+tip;
    }
};

int main()
{
    Autovehicul a("Ford","Ranger");
    Barca b("Baja","24 Outlaw");
    Avion c("Lockheed Martin","F-22 Raptor");
    cout<<"O masina: "<<a.to_string()<<endl;
    cout<<"O barca: "<<b.to_string()<<endl;
    cout<<"Un avion: "<<c.to_string()<<endl;
    return 0;
}
