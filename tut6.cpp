#include<iostream> //header file for input/output

using namespace std;

int a=10,b=5;

int main()
{
    //Arithmetic Operators
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    //Comparison Operators
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<endl;

    //Logical Operators
    cout<<"The value of ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of ((a==b) || (a<b)) is "<<((a==b) || (a>b))<<endl;
    cout<<"The value of !(a==b) is "<<!(a==b)<<endl;

    return 0;
}
