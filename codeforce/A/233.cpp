#include<bits/stdc++.h>
using namespace std;
# define ll long long 
void solve(){
	int n,m;
	cin>>n>>m;
	
	if(m>n){
		cout<<-1<<endl;
	}else{
		int ans  = n%2+n/2;
		while(ans%m!=0)ans++;
		
		cout<<ans;
	}
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}