#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,k=0;
	cin>>n>>m;
	vector<ll> candies;
	for(int i = 0;i<n;i++){
		ll a;
		cin>>a;
		candies.push_back(a);
	}
	int sum = 0;
	int maxi=100005;
	int ans = 1;
	for(int i = m;i<=n;i++){
		sum = 0;
		for(int j = i-m;j<i;j++){
//			cout<<" "<<candies[j]<<" ";
			sum  = sum + candies[j];
		}

		if(sum<maxi){
			maxi = sum;
			ans = i-m+1;
		}
	}
//	cout<<maxi<<endl;
	cout<<ans<<endl;
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
