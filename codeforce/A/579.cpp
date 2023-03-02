#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n;
	cin>>n;
	int  arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int c= 0;
	for(int i = 0;i<n-1;i++){
		if((arr[i]%2==0&&arr[i+1]%2==0)||(arr[i]%2==1&&arr[i+1]%2==1))
			c++;
	}
	cout<<c<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}