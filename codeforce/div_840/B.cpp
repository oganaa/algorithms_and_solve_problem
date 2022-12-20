#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,k,a;
	cin>>n>>k;
//	vec<ll> h(n);
//	vec<ll> p(n);
	vector<pair<ll,ll>> p(n);
	for(int i = 0;i<n;i++){
		cin>>a;
		p[i].second=a;
	}
	for(int i = 0;i<n;i++){
		cin>>a;
		p[i].first=a;
	
	}
	sort(p.begin(),p.end());

	int i = 0;
	int ans = k;
	while(k>0){
		while(p.size()>0&&p[0].second<=ans){
			 p.erase(p.begin());
		}
		k -= p[0].first;
		ans = ans +k;
	}

//	cout<<<<endl;
	if(p.size()==0)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
//	cout<<l<<endl;
//	cout<<
//	for(int i = 0;i<n;i++){
//		cin>>a;
//		p[i].second.first=a;
//		cout<<p[i].first<<" "<<p[i].second<<endl;
		
//	}
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