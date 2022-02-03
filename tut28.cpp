#include <iostream>
using namespace std;
class c2;
class c1
{
    int val;
    friend void swapy(c1 &, c2 &);

public:
    void indata(int a)
    {
        val = a;
    }

    void display()
    {
        cout << val << endl;
    }
};

class c2
{
    int val1;
    friend void swapy(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display();
};
void c2::display()
{
    cout << val1 << endl;
}

void swapy(c1 &a, c2 &b)
{
    int temp = 0;
    temp = a.val;
    a.val = b.val1;
    b.val1 = temp;
}
int main()
{
    c1 x;
    x.indata(5);
    c2 y;
    y.indata(1);
    swapy(x, y);
    x.display();
    y.display();
    return 0;
}