#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,m,k,temp;
	cin>>n;
	ll sum = 0;
	ll ans = 0;
	
	vector<pair<ll,ll>> peoples;
	for(int i = 0;i<n;i++){
		cin>>m>>k;
		peoples.push_back({m,1});
		peoples.push_back({k,-1});
	}
 
	
 	sort(peoples.begin(),peoples.end());
 	for(int i = 0;i<peoples.size();i++){
 		temp = temp + peoples[i].second;
		ans = max(ans,temp);		
	}
	cout<<ans;
	return 0;
}