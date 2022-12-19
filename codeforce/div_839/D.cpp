#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	vector<ll> vec(n);
	ll mx = INT_MAX;
	ll mn = 0;
	for(int i = 0;i<n;i++){
		cin>>vec[i];
	}
	for(int i= 0;i<n-1;i++){
		if(vec[i]<vec[i+1]){
			mx = min(mx,(vec[i+1]+vec[i])/2);
		}else if(vec[i]>vec[i+1]){
			mn = max(mn,(vec[i+1]+vec[i]+1)/2);
		}
	}
	if(mn<=mx){
		cout<<mn;
	}else cout<<-1;
	cout<<endl;
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