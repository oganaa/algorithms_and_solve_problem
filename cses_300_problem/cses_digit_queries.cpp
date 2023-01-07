#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 ll xpow(ll x, unsigned ll y){
    long long res=1;
    while(y>0){
        if (y&1) res= (res*x); y=y>>1; x=(x*x);
    }
    return res;
}

void solve(){
	ll n ;
	cin>>n;
	ll i = 1;
	while(n-(9*i*xpow(10,i-1))>0){
		n-=(9*i*xpow(10,i-1));	
		i++;
	}
	ll x;
	if(n%i==0){
		x=n/i;
	}else {
		x = n/i+1;
	}
	ll mode = n%i;
	ll start = xpow(10,i-1)-1+x;
	string str =to_string(start);
	if(mode==0){
		cout<<str[i-1]<<endl;	
	}else{
		cout<<str[mode-1]<<endl;	
	}
	str.clear();
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
//	cout<<"ans="<<str;
 
}