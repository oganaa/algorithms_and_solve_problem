#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	priority_queue <ll, vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
	ll n,k;
	cin>>n>>k;
	vector<ll> h(n),p(n);
	for(int i = 0;i<n;i++)cin>>h[i];
	for(int i = 0;i<n;i++)cin>>p[i];
	
	for(int i = 0;i<n;i++){
		q.push(make_pair(p[i],h[i]));
	}
	ll ans = k;
	while(k>0){
		while(!q.empty()&&q.top().second<ans){
			q.pop();
		}
		k -= q.top().first;
		ans = ans + k;
	}
		
	if(q.size()==0)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

}
int main(){
	ll t=1;
	cin>>t; 
	while(t--){
		solve();
	}
}