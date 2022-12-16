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
	ll n,a,sum=0;
	cin>>n;
	vector<ll> v;
	vector<ll> v2;
	for(int i = 0;i<n;i++){
		cin>>a;
		if(a%2==0){
			v.push_back(a);
		}else{
			v2.push_back(a);
		}
	}
		ll oddm=INT_MAX;
		if(v2.size()%2!=0){
			vector<ll> odd;
			for(auto e:v2){
				ll ans=0;
				ll temp = e;
				while(temp%2!=0){
					temp = floor(temp/2);
					ans++;
				}
				odd.push_back(ans);
			}
			oddm=*min_element(odd.begin(),odd.end());
			ll evenm=INT_MAX;
			if(v.size()>0){
				vector<ll> even;
				for(auto e:v){
					ll ans2=0;
					ll temp = e;
					while(temp%2==0){
						temp = floor(temp/2);
						ans2++;
					}
					even.push_back(ans2);
				}
				evenm=*min_element(even.begin(),even.end());
			}
			
			cout<<min(oddm,evenm)<<endl;
		}else {
			cout<<0<<endl;
		}
			
			
		
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}