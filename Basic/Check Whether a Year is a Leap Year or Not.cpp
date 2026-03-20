// Program to Check Whether a Year is a Leap Year or Not in C++
// Given an integer input for a year, the objective is to write a Program to Check Whether a Year is a Leap Year or Not in C++ Language.

// Example
// Input : 2020
// Output : 2020 is a Leap Year


#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    int year;


    //getting input

    cin>>year;

    if(year%400==0)
        cout<<"Leap Year!";

    else if(year%4 == 0 && year%100!=0)
        cout<<"Leap Year!!";
        
    else
        cout<<"Not a Leap Year!!!";
    return 0;



}
