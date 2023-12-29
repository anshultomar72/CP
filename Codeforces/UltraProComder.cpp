#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int t;
    cin>>t;

    while(t--) {
        int ultra, nalla, pichu, check = 0;
        for(int i = 0; i < 3; i++) {
            string str;
            int val;
            cin>>str>>val;

            if(str == "ultra_pro_comder_man") ultra = val;
            else if(str == "nalla_man") nalla = val;
            else if(str == "one_pichu_man") pichu = val;
        }
        if((pichu <= nalla || pichu <= ultra) || (ultra >= pichu || ultra >= nalla)) 
            check = 1;

        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
    return 0;
}