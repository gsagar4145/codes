#include <bits/stdc++.h>
using namespace std;

int main() {
	long long  t;
	cin>>t;
	while(t--){
	    long long  n;
	    cin>>n;
	    long long  arr[n];
	    long long  count=0;
	    for(long long  i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]%2 != 0)count++;
	    }
	    if(count%2==0)cout<<"1\n";
	    else cout<<"2\n";
	}
	return 0;
}
