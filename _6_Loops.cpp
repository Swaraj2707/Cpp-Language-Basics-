#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter no. for Tables\n";
    cin>>a;
    // cout<<"The Table of %d is\n"<<a;

    for (int i = 1; i < 11; i++)
    {
        cout<<"\n";
        cout<< a << " * " << i << " = "<<a*i;  // this is format by which u can write table in correct manner
    }
    
    }