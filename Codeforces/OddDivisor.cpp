#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        if(n % 2 != 0) cout<<"YES"<<endl;
        else {
            int flag = 0;
            for(long long i = 1; pow(2, i) <= n; i += 1) {
                long long temp = pow(2, i);
                if(n % temp != 0){
                    flag = 1;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}