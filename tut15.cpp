//Functions 
#include<iostream>

using namespace std;
void sum(int, int);
int main()
{
    int i,j;
    cout<<"Enter the first number\n";
    cin>>i;
    cout<<"Enter the second number\n";
    cin>>j;
    sum(i,j);
    return 0;

}

void sum(int a, int b)
{
    int c=a+b;
    cout<<"The sum of two numbers is "<<c;
}