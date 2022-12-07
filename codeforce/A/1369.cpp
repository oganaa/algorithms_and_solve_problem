#include<bits/stdc++.h>
using namespace std;
# define ll long long 
void solve(){
	ll n,m;
	cin>>n;
//	n=(n-2)*180;
	if(n%4==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}