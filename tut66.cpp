#include <iostream>
#include<fstream>
#include<string>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class cpi
{
public:
    T1 a;
    T2 b;
    T3 c;
    cpi(T1 a, T2 b, T3 c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void show(){
        string s;
        ofstream out;
        out.open("tut60.txt");
        out<<"a="<<a<<"\nb="<<b<<"\nc="<<c;
        out.close();
        ifstream in;
        in.open("tut60.txt");
        while(in.eof()==0){
            getline(in,s);
            cout<<s<<endl;
        }
        in.close();
    }
};
int main(){
    cpi <> c1(1,2.09,'c'); //When data type is not specified in main it used default datatype specified above but datatype must match
    // cpi <int, int,int> c1(1,2,3); When data type is specified in main
    c1.show();
    return 0;
}