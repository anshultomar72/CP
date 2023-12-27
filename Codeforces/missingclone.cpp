#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        int a, sum = 0;
        for(int i = 0; i < n - 1; i++){
            cin>>a;
            sum += a;
        }
        long long totalSum = (n*(n + 1)) / 2;
        cout<<totalSum - sum<<endl;
    }
}