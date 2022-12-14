#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin >> n;
	

	ll j =2;
	unordered_set<ll> ans;
	while(j*j*j<=n){
		ans.insert(j*j*j);
		j++;
	}
	ll i =1;
	while(i*i<=n){
		ans.insert(i*i);
		i++;
	}
	cout<<ans.size()<<endl;
}
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		solve();
	}
}
