#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 27;
    int *ptr = &a;

    cout<< ptr <<endl; // Print address of a which will be in form of hexadecimal.
    cout << *ptr <<endl; // print value of "a" that is 27
    
    int **doublePointer = &ptr; // double pointer pointing to pointer "ptr"

    cout << doublePointer <<endl; // print address of pointer "ptr"
    cout << *doublePointer <<endl; // print the same address of "a"
    cout<< **doublePointer <<endl; // print 27
}