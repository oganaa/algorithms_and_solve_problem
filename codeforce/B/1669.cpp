#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	bool isLoop=true;
	ll a,b,n,ans = -1;
	cin>>n;
	map<int,int> mp;
	for(int i  = 0;i<n;i++){
		int a ;
		cin>>a;
		mp[a]++;
	}

	for(auto it=mp.begin();it!=mp.end();it++){
		if(it->second>=3){
			ans = it->first;
			break;
		}
	}
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
