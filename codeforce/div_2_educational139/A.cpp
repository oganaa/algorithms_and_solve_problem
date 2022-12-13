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
	if(n<=9){
		cout<<n<<endl;
	}else{
		ll ans = 9;
		ll c=1;
		for(int i = 1;i<=6;i++){
			c=c*10;
			ll k = c;
			for(int j =1;j<=9;j++){
				
				if(k*j<=n){
					ans++;
				}else{
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}