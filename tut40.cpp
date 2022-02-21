#include<iostream>
using namespace std;
class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int a){
            roll_number=a;
        }
        void get_roll_number(){
            cout<<"The roll number of student is "<<roll_number<<endl;
        }
};
class exam:public student{
    protected:
        float math,physics;
    public:
        void set_marks(float x, float y){
            math = x;
            physics = y;
        }
        
        void get_marks(){
            get_roll_number();
            cout<<"The marks of roll number "<<roll_number<<" in maths are "<<math
            <<" and in physics are "<<physics<<endl;
        }
};
class result:public exam{
    public:
        void display_marks(){
            get_marks();
            cout<<"The percentage of roll number "<<roll_number<<" is "<<((math+physics)/2)<<endl;
        }
};

int main()
{
    result r1;
    r1.set_roll_number(10);
    r1.set_marks(90.0,86.0);
    r1.display_marks();
    return 0;
}