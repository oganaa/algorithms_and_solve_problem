#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c= 0;
int main(){
	ll n;
	cin>>n;
	vector<ll> x(n);
	
	ll p = INT_MIN, s = 0;
	
	for(int i =0;i<n;i++) cin>>x[i];
	for (int k = 0; k < n; k++) {
		s = max(x[k],s+x[k]);
		p = max(p,s);
	}
	cout << p << "\n";

	return 0;
}	
 
