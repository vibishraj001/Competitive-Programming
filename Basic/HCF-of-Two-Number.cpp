// HCF of Two Number in C++
// HCF of Two Number
// Here we will discuss how to find the HCF of Two Number (also known as GCD) using C++ programming language.

// HCF ( Highest Common Factor ) of two numbers is the largest positive integer that can divide both the numbers


#include<iostream>
using namespace std;

int main()
{
    int num1 = 36, num2 = 60, hcf = 1;

    for(int i = 1; i <= num1 || i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<hcf;

    return 0;
}
