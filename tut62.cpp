#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
    ofstream out;
    out.open("tut60.txt");
    out<<"This is first line\n";
    out<<"This is second line\n";
    out<<"This is third line\n";
    out<<"This is fourth line";
    out.close();
    string s;
    ifstream in;
    in.open("tut60.txt"); //Open is used to open the connection between the cpp program and file
    while(in.eof()==0) //EOF-->End of file
        {
            getline(in,s);
            cout<<s<<endl;
        }
    // in>>s; //This will print only one word at a time
    // cout<<s;
    in.close();
}
