// Program to Check for Perfect Square in C++
// Check for Perfect Square in C++
// Today in this article we will discuss the program to check for perfect square in C++ programming language.
//  We are given with an integer number and need to print “True” if it is, otherwise “False”.

// Problem Statement
// Given a number N, determine whether it is a perfect square or not.
// Input: A single integer N
// Output: Print Yes if perfect square, else No

#include <iostream>
#include<cmath>
using namespace std;

//Check perfect or not
bool isperfect(long double N){
    if(x>=0){
    long long sr = sqrt(N);//Take squareroot of the number
        return sr*sr == N;
    }
    return false;
}

int main() {

    long long N=729;
    if(isperfect(N))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}


// Output : Yes
