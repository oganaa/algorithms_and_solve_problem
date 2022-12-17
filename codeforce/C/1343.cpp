#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	ll n,a,b;
	cin>>n;
	vector<ll> v(n);
	vector<ll> vec(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
		if(v[i]>0){
			vec[i] = 1;
		}else{
			vec[i] = 0;
		}
	}
	ll ans = 0;
	for(int i= 0;i<n; i++){
		ll cur = v[i];
		int j = i;
		while(j<n&&vec[i]==vec[j]){
				cur = max(cur, v[j]);
				++j;		
		}
		ans = ans + cur;
		i=j-1;
	}
	cout<<ans<<endl;
		
		
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}