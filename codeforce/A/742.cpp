#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n;
	cin>>n;
	if(n==0) cout<<1<<endl;
	else{
		if(n%4==0){
			cout<<6<<endl;
		}else if(n%4==1){
			cout<<8<<endl;
		}else if(n%4==2){
			cout<<4<<endl;
		}
		else cout<<2<<endl;
	}
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}