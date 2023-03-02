#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ll ans = 0;
	int n,middle;
	cin>>n;
	vector<ll> v(n);

	for(int i = 0 ;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	middle=v[n/2];

	for(auto x : v){
		ans+=abs(middle-x); 
	}

	cout<<ans;
	return 0;
}