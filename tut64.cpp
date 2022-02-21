#include <iostream>
using namespace std;

template <class T> //Declaration for template is done by this method
class vector
{
public:
    int *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter value" << endl;
            cin >> arr[i];
        }
    }
    T dotprod(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    int s;
    cout << "Enter size" << endl;
    cin >> s;
    vector<int> v1(s); //At place of int we can define any data type and the template will use that data type in the class wherever T is written
    vector<int> v2(s);
    int a = v1.dotprod(v2);
    cout << a << endl;
}