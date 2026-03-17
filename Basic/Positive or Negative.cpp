// C++ Program to check whether a number is positive or negative
// Check if a Number is Positive or Negative in C++
// Given an integer input, The objective is to write a code to Check if a Number is Positive or Negative in C++ Language.

// For Instance,
// Input : num = 10
// Output :The number is Positive

#include<bits/stdc++.h>
using namespace std;

int main (){

    int n ;

    cin>>n;

    if(n>0)
        cout<<"Positive";
    else if (n<0)
        cout<<"Negative";
    else
        cout<<"Zero";

    return 0;
}
