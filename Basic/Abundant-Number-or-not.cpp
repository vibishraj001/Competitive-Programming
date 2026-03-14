// C++ Program to check whether a number is an Abundant Number or not
// Abundant Number in C++
// We will learn different ways of Abundant Number in C++

// Abundant number is an number in which the sum of the proper divisors of the number is greater than the number itself.

// Ex:- Abundant number 12 having a proper divisor is 1, 2, 3, 4, 6 

// The sum of these factors is 16 it is greater than 12 
// So it is an Abundant number

// Some other abundant numbers: 

// 18, 20, 30, 70, 78, 80, 84, 90, 96, 100, 104, 108, 120

#include <iostream>
using namespace std;

int main() {
    int n= 12;
    int sum =0;

    for(int i = 1;i<n;i++){
        if(n%i==0)
            sum = sum+i;

        }
    if(sum>n)
        cout<<"YES";
    else
    cout<<"NO";


    return 0;
}

// Output :YES
