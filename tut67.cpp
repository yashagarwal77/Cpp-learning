//function templates
#include <iostream>

using namespace std;
template <class t1, class t2>

float avg(t1 a, t2 b)
{
    float av = (a + b) / 2;
    return av;
}

int main(){
    float a=avg(5.5, 'c');
    cout<<a;
}