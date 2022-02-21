#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float a, float b)
    {
        maths = a;
        physics = b;
    }
    void print_marks()
    {
        cout << "Your marks are:" << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float a){
        score=(a/10)*100;
    }
    void print_score(){
        cout<<"Your score is "<<score<<endl;
    }
};

class result: public test, public sports{
    public:
        void print_result(){
            print_number();
            print_marks();
            print_score();
            float result= (maths+physics+score)/3;
            cout<<"Your result is: "<<result<<"%"<<endl;
        }
};
int main()
{
    result harry;
    harry.set_number(100);
    harry.set_marks(75.0,75.0);
    harry.set_score(7.5);
    harry.print_result();
    return 0;
}