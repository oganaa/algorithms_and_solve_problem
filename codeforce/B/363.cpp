#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,k=0;
	cin>>n>>m;

	ll sum = 0;
	ll maxi=150000;
	ll candies[150005];
	ll ans = 1;
	for(ll i = 1;i<=n;i++){
		cin>>candies[i];
		if(i<=m){
			sum = sum + candies[i];
		}
	}
//	cout<<sum<<endl;
	maxi = sum ;
	for(ll i = m+1;i<=n;i++){
		sum = sum - candies[i-m];
		sum = sum +candies[i];
//		cout<<sum<<" ";
		if(sum<maxi){
			maxi = sum;
			ans = i-m+1;
		}
	}
//	cout<<endl;
//	cout<<maxi<<endl;
	cout<<ans<<endl;
}
int main()
{
	int t = 1;
//	cin>>t;
	while (t--)
	{
		solve();
	}
}
