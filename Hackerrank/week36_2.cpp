#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	long long arr[n];
	for(long long i=0;i<n;i++)cin>>arr[i];
	long long count=0,count2=0;
	
	for(long long i=0;i<n;i++){
	    if(arr[i]==0)continue;
	    else{
	        i++;
	        count++;
	        count2++;
	        if(arr[i]==1){
	            count2++;
	            continue;
	        }
	        else continue;
	    }
	}
	cout <<count<<" "<<count2<<endl;
	return 0;
}
