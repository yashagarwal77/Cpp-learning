//Files input output in cpp
#include<iostream>
#include<fstream>

using namespace std;
int main(){
    string s,a;
    cout<<"Enter your name"<<endl;
    cin>>s;
    ofstream prnt("tut60.txt"); //Output Stream
    prnt<<s + " is my name";
    prnt.close(); //Close function is used to close the connection between the cpp file and the file whihc is being written or read
    ifstream get("tut60.txt"); //Input stream
    getline(get,a);
    cout<<a;
    get.close();
}