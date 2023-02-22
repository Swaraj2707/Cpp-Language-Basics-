#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age\n";
    cin>>age;
    
    switch (age)
    {
    case 12:
        cout<<"You are 12 yrs old";
        break;
    case 18:
        cout<<"You are 18 yrs old";
        break;
    
    default:
        cout<<"You are neither 12 yrs old nor 18 yrs old";
        break;
    }
    }