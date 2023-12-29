#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int t;
    cin>>t;

    while(t--) {
        int a, b;
        cin>>a>>b;

        if((a+b) % 3 != 0) cout<<"NO"<<endl;
        else{
            if((a % 3 == 2 && b % 3 == 1) || a % 3 == 1 && b % 3 == 2 || a % 3 == 0 && b % 3 == 0)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    
    return 0;
}