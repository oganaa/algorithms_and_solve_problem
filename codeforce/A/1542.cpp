#include<bits/stdc++.h>
using namespace std;
# define ll long long 
void solve(){
	int n ;
	cin>>n;
	vector<ll> a(n*2);
	vector<ll> ans(n);
	int odd=0;
	int even = 0;
	for(int i=0;i<n*2;i++ ){
		cin>>a[i];
		if(a[i]%2==0) even++;
		else odd++;
	}
	if(odd==even)cout<<"Yes";
	else cout<<"No";	
	cout<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}