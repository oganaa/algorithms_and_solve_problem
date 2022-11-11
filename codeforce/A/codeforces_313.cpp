#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n;
	cin>>n;
	if(n>=0) cout<<n;
	else{
		ll a = n;
		ll res = max(a/10,a/100*10+n%10);
		cout<<res;
	}
}
int main(){
	int t=1;
	while(t--){
		solve();
	}
}
