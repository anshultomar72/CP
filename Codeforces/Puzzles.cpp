#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int n, m;
    cin>>n>>m;
    vector<int> arr(m);

    for(int i = 0; i < m; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int f = 0, r = n - 1;
    int min = INT_MAX;
    while(r < m) {
        int diff = arr[r] - arr[f];
        if(diff < min) min = diff;
        f++; r++;
    }
    cout<<min;
    return 0;
}