#include <iostream>

using namespace std;

union Convert
{
private:
    int intreg;
    short intreg_scurt;
    char caracter;
public:
    Convert(int intreg):intreg(intreg){}
    Convert(short intreg_scurt):intreg_scurt(intreg_scurt){}
    Convert(char caracter):caracter(caracter){}
    int get_intreg()
    {
        return intreg;
    }
    short int get_intreg_scurt()
    {
        return intreg_scurt;
    }
    char get_caracter()
    {
        return caracter;
    }
};

int main()
{
    Convert a(65);
    cout<<"Caracterul care are codul "<<a.get_intreg()<<" este "<<a.get_caracter();
    return 0;
}
