#include<iostream>
using namespace std;
class base1{
    int a;
    public:
        base1(){
            // a=i;
            cout<<"Constructor for base1 called"<<endl;
        }
        // void printdata1(){
        //     cout<<"The value of base1 is "<<a<<endl;
        // }
};
class base2{
    int b;
    public:
        base2(){
            // b=i;
            cout<<"Constructor for base2 called"<<endl;
        }
        // void printdata2(){
        //     cout<<"The value of base1 is "<<b<<endl;
        // }
};
class Derived: public base1, public base2{
    // public:
    //     Derived(int a, int b): base1(a),base2(b){
    //         cout<<"derived constructor called"<<endl;
    //     }
};
int main()
{
    Derived d1;  
    return 0;
}