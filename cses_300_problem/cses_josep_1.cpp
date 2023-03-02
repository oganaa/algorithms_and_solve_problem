#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c= 0;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	ll sum = 0;
	multiset<ll> s1;
	multiset<ll> s2;
	ll temp;
	ll ans = 0;
	for(int i = 0;i<n;i++){
		cin>>temp;
		s1.insert(temp);
	}
	for(int i = 0;i<m;i++){
		cin>>temp;
		s2.insert(temp);
	}
//	cout<<*s2.lower_bound(75)<<endl; 
	for(auto it  = s1.begin(); it!=s1.end();it++){
		ll te=*it;
		ll t = *s2.lower_bound(te-k);
//		cout<<t<<" "<<te<<endl;
		if(abs(t-te)<=k){
			s2.erase(s2.lower_bound(te-k));
			ans++;
		}
		
	}
	cout<<ans<<endl;
	
 
	return 0;
}