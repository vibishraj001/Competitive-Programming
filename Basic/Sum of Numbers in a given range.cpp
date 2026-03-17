// Find the Sum of Numbers in a given range in C++
// Given two integer inputs num1 and num2, the objective is to write a code to Find the Sum of Numbers in a Given Range in C.
//  To do so we’ll keep iterating and adding the numbers from num1 until num2 to the Sum variable.

// Example
// Input : 2 6
// Output : 2 + 3 + 4 + 5 + 6 = 20


#include<bits/stdc++.h>

using namespace std;

int main (){
    int n,m;
    int sum1 = 0;
    cin >>n>>m;
    if(n>m) swap(n,m);

    // for(int i = n;i<=m;i++)
    //     sum+=i; ---> O(n)

    sum1 = (m* (m+1) ) / 2 - ( n* (n-1) ) / 2;//O(1)
    
    cout<<sum1;

    return 0;
}


