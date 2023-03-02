#include <bits/stdc++.h>
using namespace std;
 
int t[500050];
int ot[500050];
 
void solve(){
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; ++i){
		cin>>ot[i];
		t[i] = ot[i];
	}
	sort(t+1, t+n+1);
	int l = 1;
	while(m-t[l] >= 0 && l <= n) m -= t[l++];
	l--;
	if(l == n){
		cout<<"1\n";
		return;
	}
	if(m+t[l] >= ot[l+1]) cout<<n-l<<"\n";
	else cout<<n-l+1<<"\n";
}
 
int main(){
	int _;
	cin>>_;
	while(_--) solve();
}