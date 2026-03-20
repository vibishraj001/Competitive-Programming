// Find the Greatest of the Two Numbers in C++
// Given two integers as input, the objective is to check both numbers for the greatest and write a code to 
// find the greatest of the two numbers in C++.

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    if(a>b)
        cout<<"A is greatest";
    else if(a==b)
        cout<<"A & B are equal";
    else
        cout<<"B is greatest";

    return 0;
}
