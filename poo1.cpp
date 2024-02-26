#include <iostream>

using namespace std;

class Student
{
    string nume, prenume, nr_matricol;
public:
    Student()
    {
        cout<<"S-a executat constructorul implicit"<<endl;
        nume="";
        prenume="";
        nr_matricol="";
    }
    Student(string nume, string prenume, string nr_matricol)
    {
        cout<<"S-a executat constructorul explicit cu 3 parametri"<<endl;
        this->nume=nume;
        this->prenume=prenume;
        this->nr_matricol=nr_matricol;
    }
    Student(string nr_matricol)
    {
        cout<<"S-a executat constructorul explicit cu 1 parametru"<<endl;
        this->nume="";
        this->prenume="";
        this->nr_matricol=nr_matricol;
    }
    ~Student()
    {
        cout<<"S-a executat destructorul"<<endl;
    }
};

int main()
{
    Student s1;
    Student s2("Ionescu", "Ion", "200");
    Student s3("201");
    return 0;
}
