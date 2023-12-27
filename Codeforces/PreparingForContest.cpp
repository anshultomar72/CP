#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;

        int arr[n];

        for(int i = 0; i < n; i++){
            arr[i] = i + 1;
        }
        reverse(arr, arr + (n - k));
        
        for(int i = 0; i < n; i++) cout<<arr[i]<<" ";

        cout<<endl;
    }
    return 0;
}