#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin();

public:
    void read();
    void ones_comp();
    void display();
};
void binary ::read()
{
    cout << "Enter a binary number\n";
    cin >> s;
    //chk_bin();
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Wrong binary input";
            exit(0);
        }
    }
}

void binary ::ones_comp()
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    cout << "The display of string is ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    b.display();
    b.ones_comp();
    b.display();
    return 0;
}