//Constructors
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(); //This is a default constructor which doesn't accept any arguments
    void getdata()
    {
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex::Complex(){
    a=0;
    b=0;
    cout<<"Hello World"<<endl;
}
int main()
{
    Complex c1;
    c1.getdata();
    return 0;
}