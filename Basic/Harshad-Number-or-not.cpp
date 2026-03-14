// C++ program to check whether a number is a Harshad Number or not
// Harshad Number in C++ 
// A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called the Niven number.

// For Example : 153
// Sum of digits = 1 + 5 + 3 = 9

// 153 is divisible by 9 so 153 is a Harshad Number.
// Harshad Number

// Algorithm:-
// For input num

// 1.Initialize a variable sum = 0
// 2.Extract each digit of num
// 3.Add each digit to sum variable
// 4.If at the end num is completely divisible by sum
// 5.Then its a harshad’s number
#include <iostream>
using namespace std;


bool checkhashad(int n){
    int sum = 0;
    int temp = n;

    while(temp!=0){
        sum = sum + temp%10;
        temp/=10;
    }
    return n%2== 0;
}
int main() {
    int n;
    cout<<"Enter you number:";
    cin>>n;
    if(checkhashad(n))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
// Output:Enter you number:36
// YES
