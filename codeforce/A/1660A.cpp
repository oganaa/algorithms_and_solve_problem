#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
void solve(){
	ll a,b,c,d;
	cin>>a>>b;
	
	if(a==0&&b==0||a==0&&b>0){
		cout<<1<<endl;
	}else if(a>0&&b==0){
		cout<<a+1<<endl;
	}else{
		cout<<a+b*2+1<<endl;
	}
}
int main(){
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}