// C++ Program to find the LCM of two numbers
// LCM of two numbers
 

// Here we will discuss how to find the LCM of two numbers in C++ programming language.
//  LCM, or least common multiple in mathematics, of two numbers is the smallest positive integer that is divisible by both the numbers.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1 = 12, num2 = 14, lcm;

    // finding the larger number here
    int max = (num1 > num2)? num1 : num2;

    // LCM will atleast be >= max(num1, num2)
    // Largest possibility of LCM will be num1*num2
    for(int i = max ; i <= num1*num2 ; i++)
        {
            if(i % num1 == 0 && i % num2 == 0){
                lcm = i;
                break;
            }
        }

    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm;

    return 0;
}
