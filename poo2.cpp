#include <iostream>

using namespace std;

class Test
{
private:
    int x;
    int y;
public:
    Test(int x=0, int y=0)
    {
        this->x=x;
        this->y=y;
    }

    Test &set_x(int a)
    {
    x=a;
    return *this;
    }

    Test &set_y(int b)
    {
    y=b;
    return *this;
    }
    void print()
    {
        cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
    }
};

int main()
{
    Test obj1(5,5);
    obj1.set_x(10).set_y(20);
    obj1.print();
    return 0;
}
