#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    long long mod = 1e9 + 7;
    while(t--) {
        long long x,y;
        int z;
        cin>>x>>y>>z;

        if(x % y != 0) x = x - x % y;
        long long res = ((x * z) / y) % mod;
        cout<<res<<endl;
        
    }
    return 0;
}