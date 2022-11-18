#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m;
	cin>>n>>m;
	cout<<min(n,min(m,(m+n)/3))<<endl;
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
