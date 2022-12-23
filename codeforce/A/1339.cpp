#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n;
	cin>>x;
	int dp[n+1];
	dp[1] =1;
	dp[2] = 2;
	for(int i = 3;i<=n;i++){
		dp[i] = dp[i-2]+dp[i-1];
	}
	cout<<dp[n]<<endl;
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}