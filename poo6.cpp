#include <iostream>

using namespace std;

struct Film
{
    string titlu, gen;
    Film(string titlu, string gen): titlu(titlu), gen(gen){}
};

int main()
{
    Film a("Aquaman","fantasy, comics");
    cout<<"Filmul este "<<a.titlu<<" din categoria "<<a.gen;
    return 0;
}
