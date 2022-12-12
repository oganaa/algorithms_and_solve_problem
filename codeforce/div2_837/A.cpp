#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return true;
    }
    else {
        return false;
    }
}
 
void solve(){
	ll n;
	cin>>n;
	vector<ll> v(n);
	map<ll,ll> mp;
	for(int i =0;i<n;i++) {
		cin>>v[i];
		mp[v[i]]++;
	}
	auto last = --mp.end();
	auto begin = mp.begin(); 
	if(mp.size()==1){
		cout<<n*(n-1)<<endl;
	}else{
		ll ans = (last->second*begin->second) * 2;
		cout<<ans;
		cout<<endl;
	}

	mp.clear();
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}