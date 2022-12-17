#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){

	ll n;
	cin>>n;
	vector<ll> v(n);
//	vector<ll>v1(n-1);
	ll arr[n-1];
	ll m=0;
	ll index =0;
	for(int i=0;i<n;i++){
		ll a;
		cin>>v[i];
		if(m<v[i]){
			m = v[i];
			index = i;
		}
	}
	for(ll i=1;i<n;i++){
		arr[i-1] = v[i];
	}
	sort(arr,arr+n-1);
	if(index==0){
		cout<<v[0]<<endl;
	}else{
		ll ans = v[0];
		for(int i = 0;i<n-1;i++){
			if(ans<arr[i]){
				ll temp=(ans+arr[i]);
				if(temp%2==1){
					ans=(temp/2+1);
				}else{
					ans=(temp/2);
				}
			}
		}
		cout<<ans<<endl;
	}
	

}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}