#include<iostream>
using namespace std;
int sum(int,int); // funtion prototype
int main(){
    int a,b,c;
    cout<<"Enter a\n";
    cin>>a;

    cout<<"Enter b\n";
    cin>>b;

    c = sum(a,b);   // Function Call
    cout<<"The sum is\n"<<c;
}
int sum(int x, int y){
    return (x+y);
}