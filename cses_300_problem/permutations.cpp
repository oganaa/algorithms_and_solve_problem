#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
	
	ll n;
	cin>>n;
	if(n==1) cout<<1;
	else if(n==2||n==3){
		cout<<"NO SOLUTION";
	}else{
		int a = n-(n%2);
		for(int i = 2;i<=n;i=i+2){
			cout<<i<<" ";
		}	
		int c=n%2==0?n-1:n;
		for(int i = 1;i<=c;i=i+2){
			cout<<i<<" ";
		}
	}
	
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 
