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
//	vector<ll> v(m);
	vector<pair<int,int>> v(m); 
	for(int i =0;i<m;i++) {
		cin>>a>>b;
		v[i].first=a;
		v[i].second=b;
	}
//	sort(v.begin(),v.end());
	ll ans = n;
	int j = 1;
//	ans = ans+(v[0].first-1);
//	j =  v[0].first;
//	int before = v[0].first;
	ll k= 0;
	for(int i=0;i<m;i++){
		if(v[i].first+1==v[i].second){
			k++;
		}
	}
	ans = ans + (n-1) - k;
	cout<<ans<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}