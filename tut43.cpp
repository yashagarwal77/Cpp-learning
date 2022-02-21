#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "Hello World" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "Kya haal h?" << endl;
    }
};
class base3
{
public:
    void greet()
    {
        cout << "Kya haal h purvi k?" << endl;
    }
};
/*
class derived: public base1, public base2, public base3{
    int a;
};
int main()
{
    derived d;
    d.greet();
    return 0;
}*/

class derived : public base1, public base2, public base3
{
    int a;

public:
    void greet()
    {
        base1::greet(); //We have defined the greet function to tell the compiler that to use the base1 greet
    }
};
int main()
{
    derived d;
    d.greet();
    return 0;
}