#include<iostream>

using namespace std;

//typedef struct employee //typedef is used to give a short name to our original structure
//{
//    int eID;
//    char favchar;
//    float salary;
//} emp;


union money
{
    int rice;
    char car;
    float paise;
};

int main()
{
    //---------------------------Structure-----------------------------
    //emp harry;
    //emp DJ;
    //harry.eID=1;
    //harry.favchar='c';
    //harry.salary=12000;
    //DJ.eID=2;
    //DJ.favchar='A';
    //DJ.salary=1500000;
    //cout<<"Employee ID of harry is "<<harry.eID<<endl;
    //cout<<"Employee ID of DJ is "<<DJ.eID<<endl;
    //cout<<"Fav char of harry is "<<harry.favchar<<endl;
    //cout<<"Fav char of DJ is "<<DJ.favchar<<endl;
    //cout<<"Salary of harry is "<<harry.salary<<endl;
    //cout<<"Salary of DJ is "<<DJ.salary<<endl;
    
    
    //---------------------Union-------------------------------
    //union money m1;
    //int a,b;
    //m1.rice=5; 
    //m1.paise=1500.25;
    //cout<<m1.rice<<endl; //This cout will give garbage value as it is overwritten by m1.paise
    //cout<<m1.paise<<endl;
    //cout<<a<<endl;
    //cout<<b<<endl;

    //------------------Enum----------------------------------
    enum Meal{ breakfast, lunch, dinner};
    Meal m0 = breakfast;
    Meal m1 = lunch;
    cout<<m0<<endl; 
    cout<<m1<<endl;
    return 0;
}