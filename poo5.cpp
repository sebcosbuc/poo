#include <iostream>

using namespace std;

class Tabara
{
    string * denumire;
    int nr_studenti;
    string * lista_studenti;
public:
    Tabara(string denumire, int nr_studenti, string lista_studenti[])
    {
        this->denumire=new string(denumire);
        this->nr_studenti=nr_studenti;
        this->lista_studenti=new string[nr_studenti];
        for(int i=0;i<nr_studenti;i++)
            this->lista_studenti[i]=lista_studenti[i];
    }
    string get_denumire()
    {
        return *denumire;
    }
    int get_nr_studenti()
    {
        return nr_studenti;
    }
    string * get_lista_studenti()
    {
        return lista_studenti;
    }
    ~Tabara()
    {
        delete denumire;
        delete[] lista_studenti;
    }
};

int main()
{
    string studenti[]={"Maria","Ionel","Liana","Marcel","Elena"};
    Tabara t("Nucsoara",5,studenti);
    cout<<"In tabara "<<t.get_denumire()<<" se afla "<<t.get_nr_studenti()<<" studenti:"<<endl;
    for(int i=0;i<t.get_nr_studenti();i++)
        cout<<t.get_lista_studenti()[i]<<endl;
    return 0;
}
