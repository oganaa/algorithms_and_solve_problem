#include<bits/stdc++.h>
using namespace std;
# define ll long long 
void solve(){
	long long n,a=1;
	cin>>n;
	for(int i =2;i*i<=n;i++){
		if((n)%(i)==0){
			a = n/i;
			break;
		}	
	}
	cout<<n-a<<" "<<a<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}