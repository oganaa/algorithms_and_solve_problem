#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ans = 0;
	if(b>a) ans++;
	if(c>a) ans++;
	if(d>a)ans++;
	cout<<ans<<endl;
}
int main(){
	int t=1;
	cin>>t;
	
	while(t--){
		solve();
	}
}
