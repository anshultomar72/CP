#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    int win = n / 2 + 1;
	    string str = "";
	    int cnt = 0;
	    string temp = "";
	    
	    for(int i = 0; i < n; i++) {
	        if(s[i] == 'P') temp += "S";
	        else if(s[i] == 'R'){
	            temp += "P";
	            cnt++;
	        } 
	        else if(s[i] == 'S') temp += "R";
	    }
		cout<<"temp: " << temp <<cnt<<endl;
	    for(int i = n - 1; i >= 0; i--) {
			if(cnt < win) {
				str += temp[i];
				if(temp[i] != 'P') cnt++;
			}
	        else str +="P";
	    }
	    reverse(str.begin(), str.end());
	    cout<<str<<endl;
	}
    
}
