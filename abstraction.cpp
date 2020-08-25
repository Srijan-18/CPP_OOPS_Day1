#include <iostream>

using namespace std;

class Math
{
public:
    virtual void product() = 0; // function abstraction
};

class Application : public Math
{
private: // data abstraction
    int firstNum = 10;
    int secondNum = 9;

public:
    void product()
    {
        cout << "Product of " << firstNum << " & " << secondNum << " is: " << firstNum * secondNum;
    }
};

int main()
{
    Application application;
    application.product();
}
