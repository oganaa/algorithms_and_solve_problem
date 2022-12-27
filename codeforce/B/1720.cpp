#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	ll a=2,b,c,n;
	cin>>n;
	vector<ll> vec(n);
	for(int i = 0;i<n;i++) cin>>vec[i];
	sort(vec.begin(),vec.end());
	
	ll sum = vec[n-1] + vec[n-2] - vec[0] - vec[1];
	cout<<sum<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}