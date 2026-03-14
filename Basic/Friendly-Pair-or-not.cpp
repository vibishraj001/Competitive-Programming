// Friendly Pair in C++

// C Program to check Friendly Pair or not
// We will write a code to Check Friendly pair in C++

// Two numbers num1 & num2 are friendly pairs if the following holds true -

// (Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2
// 6 & 28
// sum of ALL divisors of 6  = 1+2+3+6 = 12 → 12/6  = 2
// sum of ALL divisors of 28 = 1+2+4+7+14+28 = 56 → 56/28 = 2
// ratio equal → Friendly Pair!

// Algorithm:-
// For two numbers num1 and num2

// 1.Create two variables, sum1 and sum2
// 2.Find the sum of divisors for num1 and num2 and assign the respective sums to sum1 and sum2 variables
// 3.Find the ratio of sum1/num1 and sum2/num2
// 4.If both ratios are same then these are friendly pair numbers


#include <iostream>
using namespace std;


int getdivisersum(int n){
    int sum =0;
    for(int i=1;i<n;i++){
        if(n%i==0)
            sum = sum+i;

    }
    return sum;
}
int main() {

    int n1 = 6;
    int n2 = 28;

    int sum1 = getdivisersum(n1);
    int sum2 = getdivisersum(n2);

    if(sum1/n1 == sum2/n2)
        cout<<"YES";
    else
        cout<<"NO";
    

    return 0;
}

// Output : YES
