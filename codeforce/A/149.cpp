#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	ll n;
	ll c=12;
	cin>>n;
	vector<ll> v(c);
	for(int i=0;i<c;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	if(n==0){
		cout<<0;
	}else{
		ll b=0;
		ll ans=0;
		ll index = c-1;
		while(ans<n){
			ans = ans + v[index];
			index--;
			b++;
		}
		if(b>=13)cout<<-1<<endl;
		else
		cout<<b<<endl;
	}
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}