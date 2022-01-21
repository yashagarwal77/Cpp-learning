#include<iostream>

using namespace std;

//Inline function is used if the code within function is very less and we want to decrease the time 
//used by the program to call and execute the function again and again
inline int product(int i, int j)
{
    //static int c=0; 
    //c++;
    return i*j;//+c
}

//Default Argument
float moneyrs(int moneyrec ,float factor=1.04) //if no argument is passed to factor it will use default argument
{                                             //always initialise the variable with default argument at the last
    return moneyrec*factor;
}

//Constant argument
float moneyrs(int moneyrec ,const float factor=1.04) 
{
    factor++; //You cannot change constant value                                       
    return moneyrec*factor;
}
int main()
{
    int i=4,j=5;
    //cin>>i>>j;
    cout<<"The product of i and j is "<<product(i,j)<<endl;
    cout<<"The product of i and j is "<<product(i,j)<<endl;
    cout<<"The product of i and j is "<<product(i,j)<<endl;
    cout<<"The product of i and j is "<<product(i,j)<<endl;
    
    int money=100000;
    cout<<moneyrs(money)<<endl; //Here we didn't provide any argument to factor 
    cout<<"For VIP "<<moneyrs(money,1.10)<<endl;;
    return 0;
}