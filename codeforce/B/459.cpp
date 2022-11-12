#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n,k;
	cin>>n;
	vector<long long> vec;
	for(long long i = 1;i<=n;i++){
		long long a;
		cin>>a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end());
	
	long long ans = vec[n-1] - vec[0];
	
	long long c1=0,c2=0;
	long long r = 0;
	for(long long i = 0;i<n;i++){
		if(vec[i]==vec[0]){
			c1++;
		}else break;
	}
	for(long long i = 0;i<n;i++){
		if(vec[n-1-i]==vec[n-1]){
			c2++;
		}else break;
	}
	
	if(ans==0) 	cout<<ans<<" "<<n*(n-1)/2;
	else cout<<ans<<" "<<c1*c2;
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}