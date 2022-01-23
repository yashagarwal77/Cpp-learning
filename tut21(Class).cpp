#include<iostream>
using namespace std;

//syntax to create a class
/*
class class_name{
    specifier(Public/Private):
    The data members and member functions are Private by default in C++ classes,
    if none of the access specifier is used.
};
*/
class empl
{
    //Private and public are specifiers
    private: 
        int a,b,c; // a,b,c can only be accessed by a function under this class
        //Function within private specifier can only be accessed by a function in the class
        int sal(int s){ 
            return s*0.2;
        }
    public:
        int d,e; // d and e can be accessed by any function in the program
        void fun(){
            int a,b,salary;
            cin>>a>>b>>salary;
            cout<<sal(salary)<<endl;
            cout<<a<<b<<endl;
        }
    void func(int a1,int b1, int c1){ //only func can access a,b and c
        a=a1;
        b=b1;
        c=c1;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl; 
        cout<<"The value of e is "<<e<<endl;
    }
};
int main()
{
    empl h1; //Creation of object h1 under class employee
    //h1.a=10; //This cannot be done as 'a' is declared under private 
    h1.d=10;   //This can be used as 'd' is declared under public
    h1.func(1,2,5); //only an object of a class can call a function created under the class
    h1.fun(); /* This will call function fun in public specifier which contains sal function that was
    created in private specifier */
    //h1.sal(); //This function cannot be accessed outside the class  
    return 0;
}