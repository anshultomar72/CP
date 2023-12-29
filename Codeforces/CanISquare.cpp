#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            int a;
            cin>>a;
            sum += a;
        }
        long double squareRoot = sqrt(sum);

        if(squareRoot == floor(squareRoot)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}