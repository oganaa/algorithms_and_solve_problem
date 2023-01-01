#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
	ll n;
	cin>>n;
	if(n%2==1){
		cout<<n/2<<" "<<n/2+1<<endl;
	}
	else{
	
		if((n/2-1)%2==1){
			cout<<n/2-1<<" "<<n/2+1<<endl;	
		}else 
			cout<<n/2-2<<" "<<n/2+2<<endl;	
		
	}
}
int main()
{
	int t=1;
//	cin>>t;
	while (t--)
		solve();
	return 0;
}