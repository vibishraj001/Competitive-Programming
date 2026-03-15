// C++ Program for Binary to decimal conversion
// Binary to decimal conversion in C++
// Binary Numbers are used by computers to do almost all operations. We will look at how Binary to decimal conversion in C++ works.

// Ex:-  (11011)2 = 1 * 24 + 1 * 23 + 0 * 22 + 1 * 21 + 2 * 20
//                = 16 + 8 + 0 + 2 + 1
//                = (27)10


#include<bits/stdc++.h>
using namespace std;

// function to convert binary to decimal
int getDecimal(long long num)
{
    int i = 0, decimal = 0;

    // converting binary to decimal
    while (num != 0)
    {
        int digit = num % 10;
        decimal += digit * pow(2, i);

        num /= 10;
        i++;
    }
    return decimal;
}

int main()
{
    long long binary = 11011;

    cout << getDecimal(binary);

    return 0;
}
