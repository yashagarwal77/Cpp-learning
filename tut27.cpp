//Friend Class
#include <iostream>
using namespace std;

class complex;

class calculator{
    public:
        int add(int a,int b){
            return (a+b);
        }
        int sumRealComplex(complex, complex);
        int sumCompComplex(complex, complex);
};
class complex
{
    int a, b;
    /*  If only a function of a class is to be given access to the private files of another class
        make that particular function as friend
    
    friend int calculator::sumCompComplex(complex,complex);
    friend int calculator::sumRealComplex(complex,complex);

    If all the functions of a class are to be given access to private members of a class make the
    whole class as friend
    */
   friend class calculator;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getdata()
    {
        cout<<"The value of a "<<a<<" and b is "<<b<<endl; 
    }
};
int calculator::sumRealComplex(complex o1, complex o2){
    return (o1.a+o2.a);
}
int calculator::sumCompComplex(complex o1, complex o2){
    return (o1.b+o2.b);
}
int main()
{
    complex o1,o2;
    o1.setdata(1,4);
    o2.setdata(5,7);
    calculator calc;
    int res=calc.sumRealComplex(o1,o2);
    cout<<"Ther sum of real part of a and b is "<<res<<endl;
    int resc=calc.sumCompComplex(o1,o2);
    cout<<"Ther sum of complex part of a and b is "<<resc<<endl;
    return 0;
}