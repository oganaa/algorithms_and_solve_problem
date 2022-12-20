#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
void solve(){
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	
	if(a+b>c){
		cout<<a<<" "<<b<<" "<<c<<endl;
	}else if(a+b>d){
		cout<<a<<" "<<b<<" "<<d<<endl;
	}else if(b+c>d){
		cout<<b<<" "<<c<<" "<<d<<endl;
	}else if(a+c>d){
		cout<<a<<" "<<c<<" "<<d<<endl;
	}
	else {
		cout<<b<<" "<<c<<" "<<c<<endl;
	}
	
}
 
int main(){
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}