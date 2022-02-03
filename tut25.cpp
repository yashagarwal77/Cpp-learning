#include <iostream>
using namespace std;

//Array of objects
class employee
{
    int id;
    int salary;

public:
    void setID()
    {
        cout << "Enter the Id of employee " << endl;
        cin >> id;
    }
    void getID()
    {
        cout << "The id of this employee is " << id << endl;
    }
};

//Passing objects as function arguments
class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnum()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
    void sumofcomplex(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};


int main()
{
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;

    //Array of objects
    employee fb[n];
    for(int i=0;i<n;i++)
    {
        fb[i].setID();
        fb[i].getID();
    }
    
    //Passing objects as function arguments
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printnum();
    c2.setdata(3, 4);
    c2.printnum();
    c3.sumofcomplex(c1, c2);
    c3.printnum();
    
    
    return 0;
}