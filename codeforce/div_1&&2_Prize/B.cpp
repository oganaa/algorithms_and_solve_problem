#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,k;
	cin>>n>>m>>k;
	vector<ll> v(m);
	for(int i =0;i<m;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int mx = v[m-1];
	if(n/k>=mx){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
int main()
{
	ll t = 1;
	cin>>t;
	while (t--)
	{
		solve();
	}
}