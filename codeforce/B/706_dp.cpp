#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n,k;
	cin>>n;
	vector<int> v(n);
	vector<int> f(1e5+1);
	vector<int> pf(1e5+1);
	for(int i =0;i<n;i++){
		cin>>v[i];
		f[v[i]]++;
	}
	pf[0] = 0;
	for(int i =1;i<=1e5;i++){
		pf[i] = pf[i-1] + f[i];
	}
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		if(x>1e5){
			cout<<n<<endl;
		}else{
			cout<<pf[x]<<endl;
		}
	}
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}