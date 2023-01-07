#include <bits/stdc++.h>
long long M = 1000000007;
using namespace std;
long long binpow(long long a,unsigned long long b){
	long long res = 1;
	while(b>0){
		if(b&1){
			res = (res * a)%M;
		}
		a=(a*a)%M;
		b>>=1;
	}
	return res; 
}

int main(){
	long long a,b,c;
	long long t ;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<binpow(a,b)<<endl;
	}
}