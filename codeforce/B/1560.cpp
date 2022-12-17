#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	ll a,b,c;
	cin>>a>>b>>c;
	ll d = abs(a-b);
	ll mx =max(a,b);
	if(d*2<c||mx>d*2){
		cout<<"-1"<<endl;
	}else{
		ll ans = d+c;
		d=d*2;
		if(ans%d==0){
			cout<<ans<<endl;
		}else
		cout<<ans%d<<endl;
	}
 
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}