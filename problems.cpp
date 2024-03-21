// Write a C++ program to create a class called Rectangle that has private member variables for length and width.
//  Implement member functions to calculate the rectangle's area and perimeter.

#include <iostream>

using namespace std;

class Rectangle
{
    float length;
    float width;

public:
    int area(float leng, float wid)
    {
        length = leng;
        width = wid;

        return (length * width);
    }

    int perimeter(float leng, float wid)
    {
        length = leng;
        width = wid;
        return ((length + width) * 2);
    }
};

int main()
{
    Rectangle r1;
    //cout << "Area of Rectangle is :" << r1.area(5, 30) << endl;
   // cout << "Perimeter of Rectangle is:" << r1.perimeter(45, 7) << endl;
    return 0;
}

// Write a C++ program to create a class called Person that has private member variables for name, age and country.
// Implement member functions to set and get the values of these variables.

#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;

public:
    void set(string _name, int _age, string _country)
    {
        name = _name;
        age = _age;
        country = _country;
    }

    void get()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "Country :" << country << endl;
    }
};

int main()
{

    Person p1;
    p1.set("Piyush", 20, "India");
    p1.get();
    cout << endl;
    Person p2;
    p2.set("Piyush", 25, "Jermany");
    p2.get();
}
// Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance.
//  Include member functions to deposit and withdraw money from the account

#include <iostream>
using namespace std;

class BankAcount
{
    int account_number;
    double balance;

public:
    BankAcount(int acc, double intial_balance)
    {
        account_number = acc;
        balance = intial_balance;
    }

    double deposite(double amount)
    {
        balance += amount;
        cout << amount << "Rs deposited in your a/c" << endl;
        return balance;
    }

    double withdraw(double amount)
    {
        if (amount < balance)
        {
            balance -= amount;
            cout << amount << "Rs withdrew from your a/c" << endl;
        }
        else
        {
            cout << "Insufficient  Balance !" << endl;
        }

        return balance;
    }
};

int main()
{
    BankAcount person1 = BankAcount(1, 2200);
    cout << "Available Balance in A/c : " << person1.deposite(1000) << endl;
    cout << "Available Balance in A/c : " << person1.withdraw(2000) << endl;
    cout << "Available Balance in A/c : " << person1.withdraw(5000) << endl;
}

// Write a C++ program to implement a class called Shape with virtual member functions for calculating area and perimeter.
// Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.

#include <iostream>
using namespace std;
class shape
{
    virtual double area() = 0;
    virtual double perimeter() = 0;
};
class circle : shape
{
private:
    double radius;

public:
    void set(double r)
    {
        radius = r;
    }

    double area()
    {
        return (3.14 * (radius * radius));
    }

    double perimeter()
    {
        return (2 * 3.14 * radius);
    }
};

class Rectangle : shape
{
private:
    double length;
    double breath;

public:
    void set(double len, double b)
    {
        length = len;
        breath = b;
    }

    double area()
    {
        return (length * breath);
    }

    double perimeter()
    {
        return (2 * (length + breath));
    }
};

class Triangle : shape
{
private:
    double base;
    double height;

public:
    void set(double b, double h)
    {
        base = b;
        height = h;
    }

    double area()
    {
        return (0.5 * (base * height));
    }

    double perimeter()
    {
        return ((2 * base) + height);
    }
};

int main()
{

    circle c1;
    c1.set(5);
    cout << "Area of Circle : " << c1.area() << endl;
    cout << "Perimter of Circle : " << c1.perimeter() << endl;

    Rectangle r1;
    r1.set(10, 10);
    cout << "Area of Rectangle : " << r1.area() << endl;
    cout << "Perimter of Rectangle : " << r1.perimeter() << endl;

    Triangle t1;
    t1.set(10, 10);
    cout << "Area of Triangle : " << t1.area() << endl;
    cout << "Perimter of Triangle : " << t1.perimeter() << endl;
}
