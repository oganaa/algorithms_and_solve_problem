#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll          long long
#define FORd(i,m,n) for (ll i = m; i >=n; --i)
#define FOR(i,m,n)  for (ll i = m; i <=n; ++i)
#define debug(a)    cout << #a << "=" << a << endl
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl
ll    jiecheng  (ll x)             {
	ll ret = 1;
	for (ll i = x; i > 0; i--)ret *= i;
	return ret;
}
const int N = 1e6 + 100;
void solve() {
	ll  n;
	cin>>n;
	ll a[n+2],b[n+2]={0},c[n+2]={0};
	FOR(i,1,n)cin>>a[i];
	FORd(i,n-1,1)
	{
	   if(a[i+1]==0)
	   {
		   b[i]=b[i+1]+1;
	   }
	   else b[i]=b[i+1];
	}
	FORd(i,n,1)
	{
	  	cout<<b[i]<<" ";
	}
	cout<<endl;
	FOR(i,2,n)
	{
		if(a[i-1]==1)
	    {
			c[i]=c[i-1]+1;
		}
		else c[i]=c[i-1];
	}
	FORd(i,n,1)
	{
	  	cout<<c[i]<<" ";
	}
	cout<<endl;
    ll sum=0,cha=0;
    FOR(i,1,n)
	{
		if(a[i]==0)
		{
			cha=max(cha,b[i]-c[i]);
		}
		if(a[i]==1)
		{
		    sum+=b[i];
			cha=max(cha,c[i]-b[i]);
		}
	}
	cout<<max(sum,cha+sum)<<endl;
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll T = 1;

	cin >> T;

	while (T--)  solve();

	return 0;
}

