#include<bits/stdc++.h>
using namespace std;

int main(){
	long t,n,a,b,c=0;
	cin >> t;
	while(t--){
		cin>>n;
    	a=(n-1)/3;
    	b=(n-1)/5;
    	c=(n-1)/15;
    	cout << 3*(a*(a+1)/2)+5*(b*(b+1)/2)-15*(c*(c+1)/2)<<endl;
	}
}