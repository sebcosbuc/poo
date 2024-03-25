#include <iostream>

using namespace std;

class Produs
{
    string denumire;
    double cantitate, pret_unitar;
public:
    static double tva;
    Produs(string denumire, double cantitate, double pret_unitar):
        denumire(denumire),
        cantitate(cantitate),
        pret_unitar(pret_unitar){}
        string get_denumire()
        {
            return denumire;
        }
        double get_cantitate()
        {
            return cantitate;
        }
        double get_pret_unitar()
        {
            return pret_unitar;
        }
        double get_valoare()
        {
            return cantitate*pret_unitar;
        }
        double get_valoare_tva()
        {
            return cantitate*pret_unitar;
        }
        double get_valoare_cu_tva()
        {
            return cantitate*pret_unitar*(1-tva);
        }
        void afisare()
        {
            cout<<"Produsul"<<denumire<<endl;
            cout<<"\tcantitate: "<<cantitate<<endl;
            cout<<"\tpret_unitar: "<<pret_unitar<<endl;
            cout<<"\tvaloare fara TVA: "<<get_valoare()<<endl;
            cout<<"\tvaloarea TVA-ului: "<<get_valoare_tva()<<endl;
            cout<<"\tvaloarea cu TVA: "<<get_valoare_cu_tva()<<endl;
        }
};
        double Produs::tva=0.19;
int main()
{
    cout<<" Nu am inca niciun produs, dar stiu ca TVA-ul esre de "<<Produs::tva*100<<"%"<<endl;
    Produs p1("caiet",10,2), p2("pix",5,1);
    p1.afisare();
    p2.afisare();
    cout<<"TVA-ul pentru primul produs este de "<<p1.tva*100<<"%"<<endl;
    cout<<"TVA-ul pentru al doilea produs este de "<<p2.tva*100<<"%"<<endl;
    cout<<"TVA-ul pentru toate produsele este de "<<Produs::tva*100<<"%"<<endl;
    p1.tva=0.2;
    p1.afisare();
    p2.afisare();
    cout<<"TVA-ul pentru primul produs este de "<<p1.tva*100<<"%"<<endl;
    cout<<"TVA-ul pentru al doilea produs este de "<<p2.tva*100<<"%"<<endl;
    cout<<"TVA-ul pentru toate produsele este de "<<Produs::tva*100<<"%"<<endl;
    return 0;
}
