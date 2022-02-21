#include<iostream>
#include<math.h>
using namespace std;

class simplecalculator{
    protected:
        int x,y;
    public:
        int k,l,m;
        float n;
        void clac(int a,int b){
            x=a;
            y=b;
        }
        void sum(){
            k=x+y;
        }
        void div(){
            n=x/y;
        }
        void sub(){
            l=x-y;
        }
        void mul(){
            m=x*y;
        }

        void show(){
            sum();
            div();
            sub();
            mul();
            cout<<"The sum of the entered numbers is "<<k<<endl;
            cout<<"The sub of the entered numbers is "<<l<<endl;
            cout<<"The mul of the entered numbers is "<<m<<endl;
            cout<<"The div of the entered numbers is "<<n<<endl;
        }
};

class scientificcalculator{
    protected:
        float c,d;
    public:
        void clac1(float a,float b){
            c=a;
            d=b;
        }
        float tpow(){
            return pow(c,d);
        }
        float loga(){
            return log10(c);
        }
        // float logb(){
        //     return log(c);
        // }
        float square(){
            return sqrt(c);
        }
        float cub(){
            return sin(c);
        }
        void show1(){
            cout<<"The value of c^b is "<<tpow()<<endl;
            // cout<<"The value of logc is "<<logb()<<endl;
            cout<<"The value of log10c is "<<loga()<<endl;
            cout<<"The value of sqrt(c) is "<<square()<<endl;
            cout<<"The value of sin(c) is "<<cub()<<endl;
        }
};
class hybridcalculator : public simplecalculator, public scientificcalculator{
    public:
        void showb(){
            show();
            show1();
        }
};

int main()
{
    simplecalculator c1;
    c1.clac(20,5);
    c1.show();
    scientificcalculator sc1;
    sc1.clac1(25,5);
    sc1.show1();
    hybridcalculator h1;
    h1.clac(20,5);
    h1.clac1(25,5);
    h1.showb();
    return 0;
}