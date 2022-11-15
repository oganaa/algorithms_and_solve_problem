#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n,s,s1;
	cin>>n;
	if(n<=9){
		cout<<n;
	}else{
		int ans = 9;
		while(n>10){
			n=n/10;
			if(n>9){
				ans = ans + 9;
			}else{
				ans = ans+n; 
			}
			cout<<ans<<" ";
		
		}
//		cout<<ans<<endl;
	}
	
	
	
}
int main(){
	int t=1;
	while(t--){
		solve();
	}
}