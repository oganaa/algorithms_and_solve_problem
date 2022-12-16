#include<bits/stdc++.h>
#include <iostream>
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
	vector<ll> v(n);
	vector<ll> temp;
	for(int i  = 0;i<n;i++){
		cin>>v[i];
		ll c=1;
		
            while(c<v[i]){
                c*=2;
            }
            temp.push_back(c-v[i]);
	}



		cout<<n<<endl;
		for(int i =0;i<n;i++){
			cout<<i+1<<" "<<temp[i]<<endl;
		}
		
	
		
	
	
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}