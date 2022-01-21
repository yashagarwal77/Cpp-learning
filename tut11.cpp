#include<iostream>

using namespace std;

int main()
{
    //=======================Break Statement===============================
    //int i;
    //for(i=0;i<=4;i++)
    //{
    //    cout<<i<<endl;
    //    if(i==2)
    //    {
    //        break; //If the condition in if satisfies and 'break' execute the compiler will exit the loop
    //    }
    //}
    
    //========================Continue Statement============================
    int i;
    for(i=0;i<=4;i++)
    {
        if(i==2)
        {
            continue; //If continue statement is executed it will skip this indentation and continue will the next indentation
        }
        cout<<i<<endl;
    }
    return 0;
}