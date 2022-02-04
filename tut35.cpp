// Destructor
//Destructor does not accept an argument or return anything
#include <iostream>
using namespace std;
class num
{
    static int count;

public:
    num()
    {
        count++;
        cout << "Constructor is called for object " << count << endl;
    }
    ~num() //Destructor
    {
        cout << "Destructor is called for object " << count << endl;
        count--;
    }
    void setdata(){
        count=100;
    }
};
int num::count = 0;

int main()
{
    cout << "Entering main" << endl;
    num n1;
    {
        cout << "Entering block" << endl;
        num n2, n3;
        cout << "Exiting block" << endl;
    }
    cout << "Exiting main" << endl;
    return 0;
}