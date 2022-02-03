#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //--------------------------Constants-----------------------------
    //int a=4;
    //cout<<"The value of a is "<<a<<endl;
    //a=5;
    //cout<<"The value of a is "<<a<<endl;

    //const int a=4;
    //cout<<"The value of a is "<<a<<endl;
    //a=5;  //a is declared as a constant value so it will show error
    //cout<<"The value of a is "<<a<<endl;

    //----------------------Manipulators--------------------------------
    //int a=4,b=25,c=1234;
    //cout<<"The value of a is "<<setw(3)<<a<<endl; //to use setw we need to include iomanip library in headers
    //cout<<"The value of b is "<<setw(3)<<b<<endl;
    //cout<<"The value of c is "<<setw(3)<<c<<endl;

    //---------------------Operator Precedence-------------------------
    int a=5,b=10;
    int c = a*5+b-45+86;
    //According to the precedence chart (*) will be executed first
    return 0;
}
