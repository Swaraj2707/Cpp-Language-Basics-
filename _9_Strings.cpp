#include<iostream>
#include<string>
using namespace std;
int main (){
    string a = "Swaraj";

    cout<<"Good Morning "<<a<<endl;
    cout<<"The length of name is "<<a.length()<<endl; // will print 6
    cout<<"The name is "<<a.substr(0,3)<<endl;  // print "Swa" start from index 0 and print 3 indexes after starting
    cout<<"The name is "<<a.substr(1,4)<<endl;  //print "wara" start from index 1 and print 4 indexes after starting
}