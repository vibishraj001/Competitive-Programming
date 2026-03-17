//  Count Sundays Problem (C++)

// This program calculates how many Sundays occur within N days starting from a given day.

// ## Example
// Input:
// mon 10

// Output:
// 1

// ## Language
// C++

#include <bits/stdc++.h>
using namespace std;

int main(){

    string day;
    int n;
    int start;

    cin >> day >> n;
    map<string,int> dayIndex ={

        {"sun",0},
        {"mon",1},
        {"tue",2},
        {"wed",3},
        {"thu",4},
        {"fri",5},
        {"sat",6}
    
    };
    start = dayIndex[day];

    int first_sunday = (7 - start) % 7;

    if(first_sunday > n){
        cout << 0;
    }
    else{
        cout << 1 + (n - first_sunday) / 7;
    }

    return 0;
}
