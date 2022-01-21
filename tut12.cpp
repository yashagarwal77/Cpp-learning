//Pointers
#include<iostream>

using namespace std;

int main()
{
    int a=3;
    int* b; //b is a pointer storing address of a
    b=&a;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*b<<endl;
    cout<<"The address of a is "<<b<<endl;

    //pointer to pointer
    int** c;
    c=&b; //here b is a pointer storing address of a and c is pointer storing address of b
    cout<<"The value of a is "<<**c<<endl;
    cout<<"The address of b is "<<c<<endl;
    return 0;

}