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
            for(long long i = 1; i < n; i += 2) {
                if(i == 1) continue;
                else if(n % i == 0){
                    cout<<"YES"<<endl;
                    flag = 1;
                    break;
                }
            }
            if(!flag) cout<<"NO"<<endl;
        }
    }
    return 0;
}