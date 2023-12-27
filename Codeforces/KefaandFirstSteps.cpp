#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);


    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int count = 1, max = INT_MIN;
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] <= arr[i + 1]) count++;
        else count = 1;

        if(count > max) max = count;
    }
    if(n == 1) max = 1;
    cout<<max;
    return 0;
}