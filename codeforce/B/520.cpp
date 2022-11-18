#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,k=0;
	cin>>n>>m;
	if(n>=m){
		cout<<n-m<<endl;
	}else{
		int dp[10005];
		dp[n] = 0;
		for(int i = n-1;i>=1;i--){
			dp[i]= dp[i+1]+1;
		}
		for(int i = n+1;i<=m;i++){
//			dp[i]=dp[i]
			if(i%2==0){
				dp[i]=dp[i/2]+1; 
				
			}else{
				dp[i+1] = dp[(i+1)/2]+1;
				dp[i] = dp[i+1]+1;
			}
		}
		cout<<dp[m];
	}
}
int main()
{
	int t = 1;
//	cin>>t;
	while (t--)
	{
		solve();
	}
}
