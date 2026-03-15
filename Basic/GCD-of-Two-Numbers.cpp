// GCD of Two Numbers in C++
// C++ Program to find the GCD of two numbers
// Here, in this section we will discuss GCD of two numbers in C++. GCD (Greatest Common Divisor) of two numbers is the largest number that divides both numbers.

// Example : The GCD of 45 and 30 will be :

//                    Factors of 45 are 3 X 3 X 5

//                    Factors of 30 are 2 X 3 X 5

//                    Common factors of 45 and 30 are : 3 X 5 , So the required GCD will be 15


#include<iostream>
using namespace std;

// Using Euclidean Algorithm (Repeated Subtraction)
int main()
{
    int n1 = 104, n2 = 24, gcd = 1;
    
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    
    cout<<"The GCD : "<<n1;
    
    return 0;
}
