#include<iostream>
#include<string>
using namespace std;
class Employee{
    protected:
        int id;
        string name;
        float salary;
    public:
        Employee(int i,float sal,string na){
            id=i;
            salary=sal;
            name=na;
        }
        virtual void display()=0; //This is known as pure virtual function
        /* A pure virtual function ensures that the function with same name is defined in the derived classes
        If no function of the same name is defined in derived class then the compiler will give an error
        Creating a pure virtual function makes the base class abstract 
        */
};
class programmer: public Employee{
    protected:
        string language;
    public:
        programmer(int i,float sal,string na,string lang):Employee(i,sal,na){
            language=lang;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Language: "<<language<<endl;
        }
};
class manager: public Employee{
    protected:
        string post;
    public:
        manager(int i,float sal,string na,string post):Employee(i,sal,na){
            this->post=post;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Language: "<<post<<endl;
        }
};
int main()
{
    programmer Harry(1001,10000.00,"Harry","cpp");
    // Harry.display();
    manager Skillc(1002,150000.00,"SkillF","Sales");
    // Skillc.display();
    Employee* work[2];
    work[0] = &Harry;
    work[1] = &Skillc;
    work[0]->display();
    work[1]->display();
    return 0;
}