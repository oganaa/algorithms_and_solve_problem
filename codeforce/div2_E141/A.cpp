#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
	ll n;
	cin>>n;
	vector<ll> v(n);
	unordered_map<ll,ll> mp;
	for(int i= 0;i<n;i++){
		cin>>v[i];
		mp[v[i]]++;
	}

	if(mp.size()==1){
		cout<<"NO"<<endl;
		return;
	}

	else {
		
		cout<<"YES"<<endl;
		
		sort(v.rbegin(), v.rend()); 
		if(v[0]==v[1]){
			swap(v[0],v[n-1]);
			
		}
		for (int i = 0; i < n; i++) {
	        cout << v[i] << " ";
	    }
	    cout << "\n";
		
	}
	
	
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}