#include<iostream>
using namespace std;
class test{
    int a;
    public:
        /* --------------------Case1---------------------
        void set(int a){
            // a=a; This will give garbage value as precedence of local variable is greater than class variable
            this->a=a; //This pointer points the variable of object
        }
        */
       // ----------------Case2---------------------
       test & set(int a){
           this->a=a;
           return *this;
       }
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main()
{
    test a;
    /*--------------------Case1-------------------------------
    a.set(4);
    a.getdata();
    */
   //---------------------Case2--------------------------
   //In case 2 if we use class name as a datatype and rt=eturn this pointer we can use multiple functions in a same line which will use the output given by return statement
   a.set(4).getdata();
    return 0;
}