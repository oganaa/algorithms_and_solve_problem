#include <bits/stdc++.h>
 
using namespace std;
#define ll long long 
void solve(){
	ll ans = 1,n;
	cin>>n;
	while(ans==1){
		ll sum = 0;
		ll a = n;
		while(a>0){
			sum = sum + a%10;
			a = a/10;
		}
		ans = __gcd(n,sum);
		n++;
	}
	cout<<--n<<endl;
}
	
 
 
int main() {
    int t;
    cin >> t;
    while(t--){
    	solve();
	}
 
}