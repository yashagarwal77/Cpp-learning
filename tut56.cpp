#include <iostream>
using namespace std;
class base
{
public:
    int a = 1;
    void set() // Virtual function is used to achieve run time polymorphism
    { 
        cout << "The value of a in base class is " << a << endl;
    }
};
class derived : public base
{
public:
    int b = 0;
    virtual void set()
    {
        cout << "The value of a in derived class is " << a << endl;
        cout << "The value of b in derived class is " << b << endl;
    }
};
int main()
{
    base *basepointer;
    base b1;
    derived d1;
    derived *derivedpointer;
    basepointer = &d1;
    basepointer->set();
    // derivedpointer = &b1; Derived class pointer cannot point to a base class object
    return 0;
}

/* Virtual function doesn't bind the object to the function at the time of compiling  */