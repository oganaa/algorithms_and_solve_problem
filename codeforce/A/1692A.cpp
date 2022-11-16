#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int m,s;
	cin>>m>>s;
	int ans = 0,remain=0;
	while(m!=0){
		ans = ans + m;
		
		if(m%s!=0){
			remain += m%s;
		}
		m = m / s;
		if(m==0&&remain>=s){
			m = remain;
			remain = 0;
			if(m%s!=0) remain += m%s;
			m = m /s;
		}
	}
	
	
	cout<<ans;
}
int main(){
	int t=1;
//	cin>>t;
	
	while(t--){
		solve();
	}
}
