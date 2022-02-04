#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    Complex(void);
    Complex(int x)
    {
        a=x;
        b=0;
        cout<<"Single arguments"<<endl;
    }
    Complex(int x, int y)
    {
        a=x;
        b=y;
        cout<<"2 arguments"<<endl;
    }
    void getdata()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex::Complex(void)
{
    a=0;
    b=0;
}
int main()
{
    Complex c;
    c.getdata();
    Complex c2(5);
    c2.getdata();
    Complex c3(4,6);
    c3.getdata();
    return 0;
}
