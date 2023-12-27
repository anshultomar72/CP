#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n;
        cin>>n;
    	int arr[n];
        int limit = n / 2;
    	int score = 0, zero = 0, one = 0;

    	for(int i = 0; i < n; i++) {
    	    cin>>arr[i];
            if(arr[i] == 0) zero++;
    	    else one++;
    	}
    	
    	score = min(zero, one);
    	if(score > limit) score = limit;
    	cout<<score<<endl;
	}
	return 0;
}
