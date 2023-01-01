#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
	ll n;
	cin>>n;
	int i = 2;
	int ans = 1;
	while(ans<n){
		ans = ans +i;

		i++;
	}
	if(ans ==n) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main()
{
	int t=1;
//	cin>>t;
	while (t--)
		solve();
	return 0;
}