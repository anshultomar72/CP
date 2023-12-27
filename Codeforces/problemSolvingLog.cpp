#include<iostream>
using namespace std;
#include<unordered_map>

int main() {

    int t;
    cin>>t;

    for(int i = 0; i < t; i++) {
        int n;
        cin>>n;
        string str;
        cin>>str;

        unordered_map<char, int> mp;

        for(int i = 0; i < n; i++) {
            mp[str[i]]++;
        }
        int cnt = 0;
        for(auto itr : mp){
            if(itr.second >= (itr.first - 'A' + 1)) cnt++;
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}