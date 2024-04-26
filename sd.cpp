#include <iostream>
using namespace std;
// encapsulation Basic example

class empolyee
{
private: // Optional here because the default access modifiers  in cpp is private
    int id;
    string name;
    int age;
    string place;
    char emp_class;

public:
    void setter(int _id, string _name, int _age, string _place, char c)
    {
        id = _id;
        name = _name;
        place = _place;
        emp_class = c;
    }

    void getter()
    {
        int salary;
        if (emp_class == 'A')
        {
            salary = 100000;
        }
        else if (emp_class == 'B')
        {
            salary = 70000;
        }
        else
        {
            salary = 50000;
        }
        cout << "Id:" << id << endl
             << "Name:" << name << endl
             << "Salary:" << salary << endl
             << "class" << emp_class << endl;
    }
};

int main()
{
    empolyee one;
    one.setter(1, "Piyush", 20, "solapur", 'A');
    one.getter();
}
