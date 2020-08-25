#include <iostream>

using namespace std;

class Parent {
    int a;
    private:
        void privateShowMethod(int a)
        {
            this -> a = a;
            cout << "This method is private\n" << "Value of a = "<< a << endl;
        }
     protected: // only accessible by child classes.
        void protectedShowMethod(int a) {
            this -> a = a;
            cout << "This method is protected\n" << "Value of a = "<< a << endl;
        }
     public:
        void publicShowMethod(int a){
            this -> a = a;
            cout << "This method is public\n" << "Value of a = "<< a <<  endl;
        }
      friend void friendShow(); // can access all members of parent.  
};

void friendShow() {
    Parent parent;
    cout << "<<----------------------- Friend Function -----------------------> " << endl;
    parent.privateShowMethod(20);
    parent.protectedShowMethod(20);
    parent.publicShowMethod(20);
}

class FirstChild : Parent {
  public:
   void show() {
     cout << "<<----------------------- First Child Class -----------------------> " <<  endl; 
     protectedShowMethod(200);
    }
};

int main() {
    Parent parent; // using this object we can access only public members of Parent.
     cout << "<<----------------------- Main Method -----------------------> " <<  endl; 
    parent.publicShowMethod(10); 

    FirstChild firstChild; // using this we can access public members of First child.
    firstChild.show();
    friendShow();
}