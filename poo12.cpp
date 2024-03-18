#include <iostream>

using namespace std;

class Supraincarcare
{
private:
    int valoare;
public:
    Supraincarcare(){}
    Supraincarcare(int i): valoare(i){}
    Supraincarcare operator++()
    {
        valoare++;
        return valoare;
    }
    Supraincarcare operator++(int)
    {
        return valoare++;
    }
    int get_valoare()
    {
        return valoare;
    }
};

int main()
{
    Supraincarcare i(5), pre, post;
    cout<<" valoarea initiala a lui i: "<<i.get_valoare()<<endl;
    pre = ++i;
    cout<<" valoarea lui i, dupa incremetarea prefixata: "<<i.get_valoare()<<endl;
    cout<<" valoarea lui pre: "<<pre.get_valoare()<<endl;
    post = i++;
    cout<<"valoarea lui i, dupa incrementarea postfixata: "<<i.get_valoare()<<endl;
    cout<<"valoarea lui post: "<<post.get_valoare()<<endl;
    return 0;
}
