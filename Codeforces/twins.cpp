#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main() {
    int n;
    cin>>n;
    int sum = 0;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum += arr[i]; 
    }
    int mid = sum / 2 + sum % 2, count = 0;
    sort(arr.rbegin(), arr.rend());
    for(int i = 0; i < n; i++) {
        sum -= arr[i];
        count++;
        if(sum < mid) break;
    }
    cout<<count;

    return 0;
}