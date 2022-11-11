#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n;
	cin>>x>>y>>n;
	
	if(n%x==y){
		cout<<n<<endl;
	}else{
		
		long long a = n / x;
		a = a * x;
		if(a%x==y) 
		cout<<a<<endl;
		else {
			if(n>=a+y){
				cout<<a+y<<endl;
			}else{
				
				cout<<a-x+y<<endl;
			}
		}
	}
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}