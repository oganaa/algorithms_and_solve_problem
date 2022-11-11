#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n;
	cin>>n;
	int c= 0;
	while(n){
		
		if(n&1==1) c++;
		n>>=1;
	}
	cout<<c;
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}