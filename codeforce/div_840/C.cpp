#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	vector<ll> vec(n);
	map<ll,ll> mp;
	ll sum = 0;
	stack<ll> st;
	for(int i = 0;i<n;i++){
		cin>>vec[i];
		mp[vec[i]]++;
		sum = sum + vec[i];
	}
	vector<pair<ll,ll>> p;
	for (auto it = mp.begin(); it != mp.end(); it++)
    {
    	p.push_back({it->first,it->second});
    }
    sort(p.begin(),p.end());
//    reverse(p.begin(),p.end());s
    ll j = p.size()-1;
    ll i = 0;
    ll ans = 0;
    while(i!=j&&i<=j){
    	if(p[i].first + p[j].second<abs(p[i].first-p[j].first)*2){
    		if(p[i].second==p[j].second){
    			i++;
    			j--;
    			ans+= (p[i].first-p[j].first)*2*p[j].second;
			}
			else if(p[i].second>p[j].second){
				j--;
				ans+= abs(p[i].first-p[j].first)*2*p[i].second;
			}else{
				i++;
				ans+= abs(p[i].first-p[j].first)*2*p[j].second;
			}
		}else{
			if(p[i].second==p[j].second){
    			i++;
    			j--;
    			ans+= abs(p[i].first + p[j].second) * p[j].second;
			}
			else if(p[i].second>p[j].second){
				j--;
				ans+= abs(p[i].first + p[j].second)*p[i].second;
			}else{
				i++;
				ans+=abs(p[i].first + p[j].second)*p[j].second;
			}
		}
	}
    	cout<<max(ans,sum)<<endl;
	
	
	
	
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