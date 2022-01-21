#include<iostream>

using namespace std;

int main(){
    int i,j;
    cout<<"Enter the value of i\n";
    cin>>i;
    cout<<"Enter the value of j\n";
    cin>>j;
    //-----------------if-elseif-else--------------------------
    //if(i==j)
    //{
    //    cout<<"The value of i and j are equal";
    //}
    //else if(i>j)
    //{
    //    cout<<"The value of i is greater than j";
    //}
    //else
    //{
    //    cout<<"The value of i is smaller than j";
    //}

    //-----------------Switch case----------------------------------

    switch (i)
    {
    case 90 :
        cout<<"The value of i is 90"<<endl;
        break;
    case 100 :
        cout<<"The value of i is 100"<<endl;
        break;
    
    default:
        cout<<"No special case"<<endl;
        break;
    }
    cout<<"We are done with switch case";
    return 0;
}