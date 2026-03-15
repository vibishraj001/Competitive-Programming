#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    // int max =V [0];
    // int min=V[0];

    // for(int i =0;i<n;i++){
    //     if(V[i]>max){
    //         max= V[i];
    //     }
    //     if(V[i]<min){
    //         min = V[i];
    //     }
    // }
    // cout<<"Max:"<<max<<"Min:"<<min;

    // STL method:

    int maxVal = *max_element(v.begin(), v.end());
    int minVal = *min_element(v.begin(), v.end());

    cout << "Max: " << maxVal << " Min: " << minVal;



    return 0;
}
