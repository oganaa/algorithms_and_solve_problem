#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
	ll n;
	cin>>n;
	ll a = n/2;
	ll ans = 0,start = 8;
	for(int i = 1;i<=a;i++){
		ans += start*i;
		start = start + 8;
	}
//	ll maxN = a * 8;
//	ll ans = a * (8+maxN)/2;
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