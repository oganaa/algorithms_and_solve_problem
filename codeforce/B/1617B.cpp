#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	ll a=2,b,c,n;
	cin>>n;
	while(__gcd(n-a-1,a)!=1){
		a++;
	}
	cout<<a<<" "<<n-a-1<<" 1"<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}