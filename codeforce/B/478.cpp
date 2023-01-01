#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
	ll n,m;
	cin>>n>>m;
	if(m==1){
		cout<<(n-1) * n/2<<" "<<(n-1) * n/2<<endl;
	}else {
		ll a = n-m+1;
		cout<<(m*(n/m-1)+(n%m)*2)*(n/m)/2<<" "<<(a-1) * a/2;
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