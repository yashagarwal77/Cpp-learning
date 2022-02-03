#include <iostream>
#include <string>
using namespace std;

class emp
{
    int id[100];
    string s[10];
    static int count;

public:
    int n;
    void setdata(int);
    void getdata(int);
    static void getcount()
    {
        cout << "The value of count is " << count << endl;
    }
};
void emp::setdata(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the id of employee ";
        cin >> id[i];
        cout << "Enter name of employee ";
        cin >> s[i];
        count++;
    }
}

void emp::getdata(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "The id of employee is " << id[i] << " and name is " << s[i] << endl;
    }
}
int emp::count;
int main()
{
    int n;
    cout << "Enter the number of employees " << endl;
    cin >> n;
    emp x;
    x.setdata(n);
    x.getdata(n);
    emp::getcount();
    return 0;
}