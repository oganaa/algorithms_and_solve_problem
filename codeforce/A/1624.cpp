#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n;
	cin>>n;
	vector<ll> v;
	for(int i = 0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	cout<<v[n-1]-v[0]<<endl;
}
int main(){
	int t=1;
	cin>>t;
	
	while(t--){
		solve();
	}
}
