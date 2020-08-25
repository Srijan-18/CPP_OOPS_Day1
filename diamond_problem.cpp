#include <iostream>
using namespace std;

class A {
    protected:
     void showA() {
         cout << "I am in class A" <<  endl;
     }
};

class B : public A {
    
    protected :
    void show() {
        cout << "I am in class B" << endl;
        showA();
    }
};

class C : public A {
    protected:
    void show() {
        cout << "I am in class C" <<  endl;
        showA();
    }
};

class D : public B, public C {
        
        public:
         void showD() {
             show(); // give a compile time error of ambiguous functions for class C and Class B.
         }
};


int main ()
{
    D d;
    d.showD();
}