#include <iostream>
#include <string>

using namespace std;
// Syntax for template with multiple arguments
/*
template<class T1, class T2,...> There can be mutliple classes inside the template seperated by comma's
class nameOfClass{
    //body
};
int main(){
    //body of main
}
*/

template <class T1, class T2>
class calc
{
    T1 a;
    T2 b;
    char k;

public:
    void calcu()
    {
        cout<<"Enter expression"<<endl;
        cin >> a >> k >> b;
        switch (k)
        {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        default:
            cout << "Invalid argument" << endl;
            break;
        }
    }
};
int main()
{
    calc<float, float> c;
    c.calcu();
    return 0;
}