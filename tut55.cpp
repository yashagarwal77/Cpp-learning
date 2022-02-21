#include<iostream>
using namespace std;
class base{
    public:
        int a=1;
        void set(){
            cout<<"The value of a in base class is "<<a<<endl;
        }
};
class derived:public base{
    public:
        int b=0;
        void set(){
            cout<<"The value of a in derived class is "<<a<<endl;
            cout<<"The value of b in derived class is "<<b<<endl;
        }
};
int main()
{
    base * basepointer;
    base b1;
    derived d1;
    basepointer=&d1;
    basepointer->set();
    return 0;
}