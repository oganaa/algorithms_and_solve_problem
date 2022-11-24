#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,k;
	cin>>x>>y;
	k = max(x,y);
	k = 6 - k;
	string array [] = {"1/6","1/3","1/2","2/3","5/6","1/1"};
	cout<<array[k]<<endl;
	
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}