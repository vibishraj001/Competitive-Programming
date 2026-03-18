// Largest Element in an array in C++
// Today we will learn Largest Element in an array in C++. 
// In this program we will find the maximum element of the array using iterative approach. 
// We will initialize the starting element of array as largest one and compare with all other elements
//  of the given array and update the largest value.


#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int max = 0;

    vector<int> v(n);

    for(int i = 0 ;i < n;i++){
        cin>>v[i];
        if(max<v[i])
            max=v[i];
    }
    cout<<max;


    return 0;

}
