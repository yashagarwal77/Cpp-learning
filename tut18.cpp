#include <iostream>
#include <iomanip>
using namespace std;

//Factorial of a number using recursion
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

//Fibonaci Series using recursion
int fib(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else if (n > 1)
    {
        return fib(n - 1) + fib(n - 2);
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    cout << "Fibonacci: " << setw(5) << fib(n) << endl;
    cout << "Factorial: " << setw(5) << fact(n) << endl;
    return 0;
}