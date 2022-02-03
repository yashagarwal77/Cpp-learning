//Parameterized Constructor and Default Constructor
#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
class point{
    int x,y;
    friend void dist(point ,point);
    public:
        point(int a,int b){
            x=a;
            y=b;
        }
};
void dist(point c1,point c2){
    float diff=sqrt(pow((c2.x-c1.x),2)+pow((c2.y-c1.y),2));
    cout<<"The distance between two points is "<<diff<<endl;
}

int main()
{
    int a,b,c,d;
    cout<<"Enter first point "<<endl;
    cin>>a>>b;
    point c1(a,b);
    cout<<"Enter second point "<<endl;
    cin>>c>>d;
    point c2(c,d);
    dist(c1,c2); 
    return 0;
}