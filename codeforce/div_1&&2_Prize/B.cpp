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

	int mx = *max_element(v.begin(),v.end());
	if(n/k>=mx){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
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