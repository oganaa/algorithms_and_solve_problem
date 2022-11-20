#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll a,b,n;
	cin>>n>>a>>b;
	if(n==a&&a==b) cout<<"YES"<<endl;
	else 
	if(n-(a+b)>1){
		cout<<"YES"<<endl;
	}
	else {
			cout<<"NO"<<endl;
	}
	
}
int main()
{
	int t = 1;
	cin>>t;
	while (t--)
	{
		solve();
	}
}