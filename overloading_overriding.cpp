#include <iostream>

using namespace std;

class Parent
{
public:
    void displayMessage()
    {
        cout << "This is Method of Parent Class" << endl;
    }
};

class Child : public Parent
{
public:
    void displayMessage()
    {
        cout << "This is Method of Child Class" << endl; // this message is displayed when displayMessage is called using child class object.
    }

    void add(int a, int b)
    {
        cout << "Sum of Integers: " << a << " & " << b << " is: " << a + b << endl;
    }

    void add(double a, double b)
    {
        cout << "Sum of Decimal Values: " << a << " & " << b << " is: " << a + b << endl;
    }
};

int main()
{
    int a = 5, b = 10;
    double x = 2.5, y = 1.2;
    Child child;
    child.displayMessage();
    child.add(a, b); // calls add method with integer parameters.
    child.add(x, y); // calls add method with double parameters.
}