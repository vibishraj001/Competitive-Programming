// C++ Program to check whether a number is an Automorphic number or not
// Automorphic  Number in C++
// In this post, we will learn to code Automorphic Number in C++

// An Automorphic number is a special number, whose’s square ends with the same digits as the number itself

// Q. Given a number N, check if it is an Automorphic number.

// A number is said to be Automorphic if the square of the number ends with the number itself.

#include <iostream>
using namespace std;

   bool isautomorphic(int N){
    int sq = N*N;
    while(N!=0){
        if(N%10 != sq%10)
            return false;
    N/=10;
    sq/=10;
    }
    return true;
   }


int main(){
    int N;
    cout<<"Enter your number:";
    cin>>N;
    if(isautomorphic(N))
        cout<<"Autromorphic";
    else
        cout<<" Not Automorphic";
    return 0;
}
// Output :Enter your number:3655
//  Not Automorphic
