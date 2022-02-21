#include<iostream>
using namespace std;
class derived;
class base{
    int a;
    protected:
    int b;
    public:
    friend void derived::setdata1(int,int,int);
    int c;
    void setdata(int i,int j,int k){
        a=i;
        b=j;
        c=k;
    }
    void getdata(){
        cout<<"The value of a is "<<a<<" and b is "<<b<<" and c is "<<c<<endl; 
    }
};
class derived:public base{
    public:
        void setdata1(int x,int y, int z){
            //a cannot be set here as it is not inherited
            a=x;
            b=y;
            c=z;
        }
         void getdata(){
        cout<<"The value of b is "<<b<<" and c is "<<c<<endl;
        cout<<"Value of a cannot be displayed here as it is not inherited"<<endl; 
    }
};
int main()
{
    base b;
    b.setdata(1,2,3);
    b.getdata();
    derived d;
    d.setdata1(3,5,6);
    d.getdata();   
    return 0;
}