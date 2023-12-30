#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// Function to find the Greatest Common Divisor (GCD) using Euclidean Algorithm
int gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the Least Common Multiple (LCM) using the GCD
long long lcm(long long a, long long b) {
    // LCM = (a * b) / GCD(a, b)
    return (a * b) / gcd(a, b);
}

int main() {
    int t;
    cin>>t;
    // cout<<"lcm(250000000, 500000000)" << lcm(250000000,5000000009)<<endl;
    while(t--) {
        long long a, b;
        cin>>a>>b;

        if(a == 1 || b == 1) cout<< a*a*b*b << endl;
        else{
            long long x = lcm(a,b);
            if(a == x || b == x) {
                long long temp = x / min(a, b);
                cout<<x * temp<<endl;
            }
            else cout<<x<<endl;
        }
    }
    return 0;
}