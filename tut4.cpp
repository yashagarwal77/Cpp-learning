//Local and global variables can have same name

#include<iostream>

using namespace std;
int glo=5; //global variable

//Function definition
void sum(){
    int a;
    cout<<glo;
}

//Start of main function
int main()
{
    int a=15,b=21;
    cout<<"The value of a is "<< a <<" & the value of b is "<<b;
    int glo=24; //local variable
    bool y=true; //true=1    False=0
    sum();
    cout<<"The value of glo is "<<glo<<endl;
    cout<<"The value of global glo is "<<::glo<<endl; //This will print local variable if available if not available then will print global variable
    return 0;
}
