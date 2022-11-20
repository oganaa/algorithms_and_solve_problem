#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	string s;
	int h,m;
	cin>>h>>m;
	int ans = (23- h)* 60;
	ans = ans + 60 - m;
	cout<<ans<<endl;
	
	
}
int main()
{
	int t = 1;
	cin>>t;
	while (t--)
	{
		solve();
	}
}