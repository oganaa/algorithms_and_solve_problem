#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
void solve(){
	ll a,b,c,d;
	cin>>a>>b>>c;
	ll d1,d2,ans=0;
	 d1 = abs(a-1);
	 d2 = abs(b - c) + c - 1;
	if(d1<=d2){
		ans = ans + 1;
	}
	if( d1 >= d2) {
		ans = ans +2;
	}
	cout<<ans<<endl;
}
int main(){
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}