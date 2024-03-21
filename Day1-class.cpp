#include <iostream>

using namespace std;

class Employee
{       // class is userdefined data structure / datatype
public: // this is public access modifer where any body from outside a class can access the class methods and members
    string Name;
    string compnay; // class member
    int age;

    void printout() // method
    {
        cout << "Name of the employee is " << Name << "\n";
        cout << "Company of the employee is " << compnay << "\n";
        cout << "age of employee is " << age << "\n";
    }
}; // ; is imp here , unless it will give compile time error

int main()
{
    // ClassName varible_name

    Employee empy; // obj
    empy.Name = "Piyush";
    empy.compnay = "VIT,PUne";
    empy.age = 20;
    empy.printout();
}