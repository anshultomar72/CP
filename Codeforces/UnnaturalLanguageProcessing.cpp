#include<iostream>
using namespace std;
#include<bits/stdc++.h>

bool isConsonant(char c) {
    return c == 'b' || c == 'c' || c == 'd';
}

bool isVowel(char c) {
    return c == 'a' || c == 'e';
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        string str;
        cin>>str;

        vector<string> arr;
        for(int i = n - 1; i >= 0; i--) {
            if(isConsonant(str[i]) && i > 1){
                if(isVowel(str[i - 1]) && isConsonant(str[i - 2])){
                    string temp = "";
                    temp += str[i - 2];
                    temp += str[i - 1];
                    temp += str[i];
                    arr.push_back(temp);
                    i -= 2;
                }
                
            }
            else if(i > 0 && isVowel(str[i]) && isConsonant(str[i - 1])) {
                string temp = "";
                temp += str[i - 1];
                temp += str[i];
                arr.push_back(temp);
                i -= 1;
            }
        }
        reverse(arr.begin(), arr.end());

        for(int i = 0; i < arr.size() - 1; i++) {
            cout<<arr[i]<<".";
        }
        cout<<arr[arr.size() - 1]<<endl;
    }
    return 0;
}