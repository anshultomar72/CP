#include<iostream>
using namespace std;

int main() {
    string str;
    cin>>str;
    string result = "";
    int flag = 1;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B') {
            i += 2;
            if(!flag){
                result += " ";
                flag = 1;
            }
            continue;
        }
        else{
            result += str[i];
            flag = 0;
        }
    }
    cout<<result;
    return 0;
}