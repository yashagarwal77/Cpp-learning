#include<iostream>
using namespace std;
class base1{
    protected:
        int i;
    public:
        void setbase1(int a){
            i=a;
        }
};
class base2{
    protected:
        int j;
    public:
        void setbase2(int a){
            j=a;
        }
};
class derived : public base1, public base2{
    public:
        void show(){
            cout<<"The value of i is "<<i<<endl;
            cout<<"The value of j is "<<j<<endl;
            cout<<"The sum of i and j is "<<i + j<<endl;
        }
};
int main()
{
    derived h;
    h.setbase1(50);
    h.setbase2(50);
    h.show();
    return 0;
}