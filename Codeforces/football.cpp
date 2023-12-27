#include<iostream>
using namespace std;

int main() {
    string str;
    cin>>str;

    int f = 0, r = 1, check = 0;
    
    while(f < str.size() - 1) {
        if(str[f] != str[r]) f = r;
        r++;
        if(r - f >= 7) {
            cout<<"YES";
            check = 1;
            break;
        }
    }
    if(!check) cout<<"NO";
    
    return 0;
}