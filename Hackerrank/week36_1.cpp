#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    if(s.substr(s.length() - 2 )=="ic"){
	        if(s.substr(0,5)=="hydro")cout<<"non-metal acid\n";
	        else cout<<"polyatomic acid\n";
	    }
	    else cout<<"not an acid but an aatma\n";
	}
	return 0;
}
