#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m,k;
	cin>>n>>m>>k;
	
	int total = n/k;
	if(total>=m){
		cout<<m<<endl;
		return;
	}else{
		int d = total;
		int e = ceil(1.0*(m-d) /(k-1));
		cout<<d-e<<endl;
		return;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--) solve();
	
	return 0;
}