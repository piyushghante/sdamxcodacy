#include <iostream>
using namespace std;

class infromation
{

public:          // Because we have to accces all members and methods outside of class
    string Name; // classmembers
    string address;
    int age;

    void showdata()
    {
        cout << Name << address << age;
    }

    // Constructor name must be same as class name
    infromation(string name, string add, int age)
    {
        Name = name;
        address = add;
        age = age;
    }
};

int main()
{
    // class_name object_name=constructor_name(parameters)

    infromation info = infromation("Piyush", "Solapur", 20);
    // method call from class using class
    info.showdata();
}