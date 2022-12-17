#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	ll n,a,b;
	cin>>n>>a>>b;
	ll d = min(a,b);
	if(d>=n){
		cout<<"Yes"<<endl;
	}else cout<<"No"<<endl;
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}