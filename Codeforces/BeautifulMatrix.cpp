#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int a;
            cin>>a;
            if(a) {
                cout<<abs(2-i) + abs(2-j);
                break;
            }
        }
    }

    
    return 0;
}