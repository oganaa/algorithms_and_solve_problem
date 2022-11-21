#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	bool isLoop=true;
	ll a,b,n,ans = 0;
	cin>>n;
	for(int i = 1;i<=n;i=i*10+1){
		for(int digit = 1 ;digit<=9;digit++){
			if(i*digit<=n){
				ans++;
			}
		}
	}
	cout<<ans<<endl;
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
