#include<iostream>
using namespace std;

template<class t>
class harry{
    public:
        t data;
        harry(t a){
            data=a;
        }
        void display();
};
//Member function templates
template<class t>
void harry<t>::display(){
    cout<<data<<endl;
}

//Overloading template function
void func(int a){
    cout<<"Hum first "<<a<<endl;
}
template<class T1>
void func(T1 a){
    cout<<"Hum Second "<<a<<endl;
}
int main(){
    harry <int> h1(5);
    h1.display();
    func(4);
    return 0;
}