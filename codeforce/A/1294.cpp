#include<bits/stdc++.h>
using namespace std;

void solve(){
	float x,y,n;
	float res =  1;
	cin>>x>>y;
	x = x -2;
	if(x<=0){
		cout<<1<<endl;
	}else{
		x = ceil(x/y);
		int z=x+1;
		cout<<z<<endl;
	}
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}