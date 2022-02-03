#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex() //This is a default constructor which doesn't accept any arguments
    {
        a = 0;
        b = 0;
        cout << "Default" << endl;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
        cout << "Const 1" << endl;
    }
    Complex(int x)
    {
        a = x;
        b = 10;
        cout << "Const 2" << endl;
    }
    void getdata()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1;
    c1.getdata();
    Complex c2(10);
    c2.getdata();
    Complex c3(10,20);
    c3.getdata();
    return 0;
}