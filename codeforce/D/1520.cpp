#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
	ll n;
	cin>>n;
	vector<ll> vec(n);
	map<ll,ll> mp;
	for(int i = 0 ;i<n;i++)
	{
		cin>>vec[i];
		mp[vec[i]-i]++;
	}
	ll ans= 0;
	for(auto it = mp.begin();it!=mp.end();it++){
		
		ans +=  it->second*(it->second-1)/2;
	}
	
	cout<<ans<<endl;
}
int main()
{
	int t;
	cin>>t;
	while (t--)
		solve();
	return 0;
}