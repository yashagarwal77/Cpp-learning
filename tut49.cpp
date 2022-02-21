#include<iostream>
using namespace std;
class emp{
    int sal;
    public:
        emp(int i):sal(i){ //We can initialize the value of variables using this method also
            cout<<"Value of sal is "<<sal<<endl;
        }
};
int main()
{
    emp harry(10000);
    return 0;
}