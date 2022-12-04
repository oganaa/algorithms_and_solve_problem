#include<bits/stdc++.h>
using namespace std;
# define ll long long 
void solve(){
	string s;
	int n ;
	vector v(n)
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int ans = 0;
	for(int i = 0;i<n;i++){
		ans = ans+(v[i]-v[0]);
	}
	cout<<ans<<endl;
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}