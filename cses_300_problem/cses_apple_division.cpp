#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c= 0;
int main(){
	int n;
	cin>>n;
	ll sum = 0;
	vector<ll> v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
	}
	ll ans = LONG_LONG_MAX;
	for(int i = 0;i<(1<<n);i++){
		ll temp = 0;
		for(int j = 0;j<n;j++){
			if(i&1<<j){
				temp = temp + v[j];
			}
		}
		ll diff= abs((sum-temp)-temp);
		ans = min(ans,diff);
	}
	cout<<ans<<endl;
	return 0;
}	
 
