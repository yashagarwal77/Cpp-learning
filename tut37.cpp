#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
    Employee(int empid)
    {
        id = empid;
        salary = 100;
    }
    Employee() {}
};
// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/
class programmer : public Employee
{
    public:
        int langcode;
        programmer(int empid){
            id=empid;
            langcode=10;
        }
        void getdata(){
            cout<<"The ID of emp is "<<id<<endl;
        }
}; 
int main()
{
    Employee harry, rohan;
    harry=Employee(10);
    cout<<harry.id<<endl;
    cout<<harry.salary<<endl;
    rohan=Employee(20);
    cout<<rohan.id<<endl;
    cout<<rohan.salary<<endl;
    programmer p1(15);
    p1.getdata();
    p1.salary=150;
    cout<<p1.id<<endl;
    cout<<p1.salary<<endl;
    return 0;
}