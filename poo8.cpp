#include <iostream>

using namespace std;

union Sep_comb
{
private:
    unsigned int intreg;
    unsigned short intregi_scurti[2];
    char caracter[4];
public:
    Sep_comb(unsigned int intreg):intreg(intreg){}
    Sep_comb(unsigned short intregi_scurti[])
    {
        for(int i=0;i<2;i++)
            this->intregi_scurti[i]=intregi_scurti[i];
    }
    Sep_comb(char caractere[])
    {
        for(int i=0;i<4;i++)
            this->caracter[i]=caracter[i];
    }
    unsigned int get_intreg()
    {
        return intreg;
    }
    unsigned short int * get_intregi_scurti()
    {
        return intregi_scurti;
    }
    char * get_caractere()
    {
        return caracter;
    }
};

int main()
{
    Sep_comb a(1198090089);
    cout<<"Valoarea initiala: "<<a.get_intreg()<<endl;
    cout<<"Conversie in 2 intregi scurti: "<<a.get_intregi_scurti()[1]<<", "<<a.get_intregi_scurti()[0]<<endl;
    cout<<"Conversie in 4 caractere: "<<a.get_caractere()[3]<<", "<<a.get_caractere()[2]<<", "<<a.get_caractere()[1]<<", "<<a.get_caractere()[0]<<endl;
    cout<<endl;
    char x[]={'i','m','i','M'};
    Sep_comb b(x);
    cout<<"Caracterele initiale: "<<b.get_caractere()[3]<<", "<<b.get_caractere()[2]<<", "<<b.get_caractere()[1]<<", "<<b.get_caractere()[0]<<endl;
    cout<<"Conversie in 2 intregi scurti: "<<b.get_intregi_scurti()[1]<<", "<<b.get_intregi_scurti()[0]<<endl;
    cout<<"Conversie intr-un intreg: "<<b.get_intreg()<<endl;
    cout<<endl;
    unsigned short y[]={27765,19573};
    Sep_comb c(y);
    cout<<"Valorile initiale: "<<c.get_intregi_scurti()[1]<<", "<<c.get_intregi_scurti()[0]<<endl;
    cout<<"Conversie intr-un intreg: "<<c.get_intreg()<<endl;
    cout<<"Conversie in 4 caractere: "<<c.get_caractere()[3]<<", "<<c.get_caractere()[2]<<", "<<c.get_caractere()[1]<<", "<<c.get_caractere()[0]<<endl;
    cout<<endl;
    char z[]={(char)255,(char)255,(char)255,(char)255};
    Sep_comb d(z);
    cout<<"Caracterele initiale: "<<d.get_caractere()[3]<<", "<<d.get_caractere()[2]<<", "<<d.get_caractere()[1]<<", "<<d.get_caractere()[0]<<endl;
    cout<<"Conversie in 2 intregi scurti: "<<d.get_intregi_scurti()[1]<<", "<<d.get_intregi_scurti()[0]<<endl;
    cout<<"Conversie intr-un intreg: "<<d.get_intreg()<<endl;
    return 0;
}
