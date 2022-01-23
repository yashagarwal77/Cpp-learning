#include<iostream>

using namespace std;

void sum(int i, int j){
    int k=i+j;
    cout<<"The sum of "<<i<<" & "<<j<<" is "<<k<<endl;
}

void subs(int i, int j){
    int k=i-j;
    cout<<"The substraction of "<<i<<" & "<<j<<" is "<<k<<endl;
}

void prod(int i, int j){
    int k=i*j;
    cout<<"The product of "<<i<<" & "<<j<<" is "<<k<<endl;
}

void di(int i, int j){
    float k=i/j;
    cout<<"The division of "<<i<<" & "<<j<<" is "<<k<<endl;
}

int main()
{
    int i,j,k,x;
    for(x=0;x<1;x){
        cout<<"Select any number: \n";
        cout<<"1-Addition\n";
        cout<<"2-Substraction\n";
        cout<<"3-Multiplication\n";
        cout<<"4-Division\n";
        cin>>k;
        cout<<"Enter first number\n";
        cin>>i;
        cout<<"Enter second number\n";
        cin>>j;
        if(k==1)
        {
            sum(i,j);
            return 0;
        }
        else if(k==2)
        {
            subs(i,j);
            return 0;
        }
        else if(k==3)
        {
            prod(i,j);
            return 0;
        }
        else if(k==4)
        {
            di(i,j);
            return 0;
        }
        else
        {
            cout<<"Invalid Selection, Select a valid number\n";
        }
    }
}