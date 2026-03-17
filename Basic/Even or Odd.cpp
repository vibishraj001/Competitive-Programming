// Check Whether a Number is Even or Odd in C++
// Given an integer input num, the objective is to write a code to Check Whether a Number is Even or Odd in C++. 
// To do so we check if the number is divisible by 2 or not, it’s Even if it’s divisible otherwise Odd.

// Example 
// Input : num = 12
// Output : Even 





#include <iostream>
using namespace std;

int main(){
    int num;
   cin>>num;
//    if(num%2==0)
//     cout<<"Even number";
   
//    else
//     cout<<"Odd number";

 (num%2==0) ? cout<<"Even number" : cout<<"Odd Number";  

    return 0;
}
