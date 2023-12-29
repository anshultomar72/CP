#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    string str;
    cin>>str;

    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '.') cout<<0;
        else if(str[i] == '-' && str[i+1] == '.') {
            cout<<1;
            i++;
        }
        else if(str[i] == '-' && str[i+1] == '-') {
            cout<<2;
            i++;
        }
    }
    
    return 0;
}