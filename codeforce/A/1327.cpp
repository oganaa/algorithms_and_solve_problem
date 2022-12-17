#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	ll n,k;
	cin>>n>>k;
	ll ans = k*k;
	if(ans>n){
		cout<<"NO"<<endl;
	}else {
		if(k%2==1&&n%2==0){
			cout<<"NO"<<endl;
		}else if(k%2==0&&n%2==1){
			cout<<"NO"<<endl;
		}else
		cout<<"YES"<<endl;
	}
 
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}