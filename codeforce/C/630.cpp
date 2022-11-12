#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n;
	cin>>n;
	ll ans=0;
	for(int i = 1;i<=n;i++){
		ans = ans + pow(2,i);
	}
	cout<<ans;
	
}
int main(){
	int t=1;
	while(t--){
		solve();
	}
}
