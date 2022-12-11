#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
	
	ll n;
	cin>>n;
	vector<ll> s(n);
	for(int i =0;i<n;i++) cin>>s[i];
	
	ll c=0;
	for(int i = 1;i<n;i++){
		if(s[i]<s[i-1]){
			c=c+s[i-1] - s[i];
			s[i] = s[i-1];
		}
	}
	cout<<c;
	
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 
