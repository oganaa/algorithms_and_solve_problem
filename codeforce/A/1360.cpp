#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll a,b,c;
	
	cin>>a>>b;
	c = min(a,b);
	c=c*2;
	a = max(max(a,b),c);
	cout<<a*a<<endl;
}
int main(){
	int t=1;
	cin>>t;
	
	while(t--){
		solve();
	}
}
