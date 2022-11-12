#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n;
	cin>>n;
	if(n%2==0){
		ll a = n/2;
		cout<<(a+1)/2-1;
	}else cout<<0;
}
int main(){
	int t=1;
	while(t--){
		solve();
	}
}
