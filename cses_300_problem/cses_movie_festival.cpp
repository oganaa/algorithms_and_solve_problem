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
		peoples.push_back({k,m});
	}
 
	int t = 0;
 	sort(peoples.begin(),peoples.end());
 	for(int i = 0;i<peoples.size();i++){
 		if(t <= peoples[i].second){
 			ans++;
 			t = peoples[i].first;
		 }	
	}
	cout<<ans;
	return 0;
}