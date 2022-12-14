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
	ll n,a,b,m;
	cin>>n>>m;
	vector<pair<ll,ll>> v(m); 
	vector<ll> first(n+1,n+1);
	for(;m--;) {
		cin>>a>>b;
		if(a>b) swap(a,b);
		first[a] = min(first[a],b);
	}
	for(int i =n-1;i>=1;i--){
		
		first[i] = min(first[i],first[i+1]);
		
	}
	for(int i=1;i<=n;i++){
		
		cout<<first[i]<<" ";
		
	}
	cout<<endl;
	ll ans=0;
	for(int i =1;i<=n;i++){
		ans = ans + first[i] - i;
	}
	cout<<ans<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}