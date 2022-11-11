#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n;
	cin>>n;
	int c= 0;
	int c1 = 0;
	for(int i = 1;i<=n;i++){
		cin>>x>>y;
		if(x>y)c++;
		else if(y>x) c1++;
	}
	if(c==c1) cout<<"Friendship is magic!^^";
	else if(c>c1){
		cout<<"Mishka";		
	}else{
		cout<<"Chris";
	}
	
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}