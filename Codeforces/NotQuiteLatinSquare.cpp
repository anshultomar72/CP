#include<iostream>
using namespace std;
#include<vector>

int main() {
    int t;
    cin>>t;

    while(t--) {
        vector<vector<char>> arr(3, vector<char>(3));
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++) {
                cin>>arr[i][j];
            }
        }

        for(int i = 0; i < 3; i++){
            int a = 0, b = 0, c = 0;
            for(int j = 0; j < 3; j++) {
                if(arr[i][j] == 'A') a++;
                else if(arr[i][j] == 'B') b++;
                else if(arr[i][j] == 'C') c++;
            }
            if(a == 0){ 
                cout<<'A'<<endl;
                break;
            }
            else if(b == 0) { 
                cout<<'B'<<endl;
                break;
            }
            else if(c == 0) { 
                cout<<'C'<<endl;
                break;
            }
        }
    }
    return 0;
}