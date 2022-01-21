#include<iostream>

using namespace std;

int main()
{
    int i=0;
    int marks[4]={45,55,92,35};

    //for(i=0;i<4;i++)
    //    cout<<"The value of mark "<<i<<" is "<<marks[i]<<endl;
    
    //while (i<4)
    //{    
    //    cout<<"The value of mark "<<i<<" is "<<marks[i]<<endl;
    //    i++;
    //}

    //do
    //{
    //    cout<<"The value of mark "<<i<<" is "<<marks[i]<<endl;
    //    i++;
    //} while (i<4);

    int* p=marks;  
    cout<<"The value of marks[0] is "<<*(p++)<<endl;
    cout<<"The value of p is "<<p<<endl;
    cout<<"The value of marks[1] is "<<*(p++)<<endl;
    cout<<"The value of p is "<<p<<endl;
    cout<<"The value of marks[2] is "<<*(p++)<<endl;
    cout<<"The value of p is "<<p<<endl;        
    cout<<"The value of marks[3] is "<<*(p++)<<endl;
    cout<<"The value of p is "<<p<<endl;
    
    return 0;
}