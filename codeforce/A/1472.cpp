#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n;
	long long res =  1;
	cin>>x>>y>>n;
	
	
	 while (x % 2 == 0) {
    	x /= 2;
    	res *= 2;
	}
  while (y % 2 == 0) {
    y /= 2;
    res *= 2;
  }
	
	 if(res>=n){
		cout<<"YES"<<endl;
	}else {
		cout<<"NO"<<endl;
	}
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}