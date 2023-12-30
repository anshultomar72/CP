#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;

        int mul = 1;

        for(int i = 0; i < n; i++) {
            int a;
            cin>>a;
            mul *= a;
        }
        if(2023 % mul != 0) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for(int i = 0; i < k; i++){
                if(!i) cout<<2023 / mul<<" ";
                else cout<<1<<" ";

            }
            cout<<endl;
        }
    }
    return 0;
}