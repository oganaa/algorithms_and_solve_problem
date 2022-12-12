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
	for(int i =0;i<n;i++) {
		cin>>v[i];
	}
	ll answer=__gcd(v[0],v[1]);
	if(answer>=2)
	{
		cout<<"YES"<<endl;
	}else{
		for(int i = 2;i<n;i++){
			answer = __gcd()
		}
	}
	
//	mp.clear();
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}