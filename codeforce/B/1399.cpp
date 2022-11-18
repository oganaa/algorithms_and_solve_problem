#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,k=0;
	cin>>n;
	vector<ll> candies;
	vector<ll> oranges;
	ll sum1=0;
	ll sum2= 0;
	for(int i = 0;i<n;i++){
		ll a;
		cin>>a;
		sum1= sum1 + a;
		candies.push_back(a);
	}

	for(int i = 0;i<n;i++){
		ll a;
		
		cin>>a;
		sum2= sum2 + a;
		oranges.push_back(a);
	}
	int sum = 0;
//	for(int i = 0;i<n;i++){
//		sum = sum + (candies[i]-oranges[i]);
//	}
	cout<<sum2-sum1<<endl;
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
