#include<iostream>
using namespace std;
int main(){
    // 1d Array
    int marks[3],i;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter marks of student "<<i+1 <<"\n";
        cin>>marks[i];
    }
    for (int i = 0; i < 3; i++)
    {
    cout<<"The marks of students is "<<marks[i] <<endl;
    }

    //2d Array
    int arr2d[2][3] = {
        {54,787,5454},
        {100,90,88}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Array at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
        }
        
    }
    
}
