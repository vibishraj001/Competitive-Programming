#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 6;

    vector<int> num1(n);
    vector<int> num2(n);

    // input
    for(int i=0;i<n;i++){
        cin>>num1[i];
    }

    for(int i=0;i<n;i++){
        cin>>num2[i];
    }

    unordered_set<int> s(num1.begin(), num1.end());
    unordered_set<int> result;

    for(int x : num2){
        if(s.count(x)){
            result.insert(x);
        }
    }

    for(int x : result){
        cout<<x<<" ";
    }

    return 0;
}
