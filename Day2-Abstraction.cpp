#include <iostream>
using namespace std;

class abstract_emp
{
    virtual void askpromotion() = 0;
};

class type_a : abstract_emp
{

    string Name;
    int join;
    int age;
    char emp_class;

public:
    void set(string _Name, int _join, int _age, char _emp_class)
    {
        Name = _Name;
        join = _join;
        age = _age;
        emp_class = _emp_class;
    }
    void askpromotion()

    {
        int exp = 2024 - join;
        if (exp >= 5)
        {
            cout << Name << ", Congratulation ! You are eligible for promotion" << endl;
        }
        else
        {
            cout << Name << ",Sorry We will get back to you later " << endl;
        }
    }
};

class type_b : abstract_emp
{

    string Name;
    int join;
    int age;
    char emp_class;

public:
    void set(string _Name, int _join, int _age, char _emp_class)
    {
        Name = _Name;
        join = _join;
        age = _age;
        emp_class = _emp_class;
    }
    void askpromotion()
    {
        if ((2024 - join) > 5 && age > 35)
        {
            cout << Name << ", Congratulation ! You are eligible for promotion" << endl;
        }
        else
        {
            cout << Name << ",Sorry We will get back to you later resaon is age:" << age << endl;
        }
    }
};

int main()
{
    type_a emp1;
    emp1.set("piyush", 2018, 36, 'A');
    emp1.askpromotion();

    type_b emp2;
    emp2.set("piyush", 2018, 25, 'A');
    emp2.askpromotion();
}