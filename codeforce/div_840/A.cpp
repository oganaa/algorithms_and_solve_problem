#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	vector<ll> vec(n);
	for(int i = 0;i<n;i++){
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end());
	ll ans = vec[0];
	ll ans2= vec[0];

	for(int i = 1;i<n;i++){
		ans = ans|vec[i];
		ans2=ans2&vec[i];
	}
	cout<<ans-ans2<<endl;

}
int main()
{
	ll t = 1;
	cin>>t;
	while (t--)
	{
		solve();
	}
}
	vector<ll> vec(n);
	for(int i = 0;i<n;i++){
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end());
	ll ans = vec[0];
	ll ans2= vec[0];

	for(int i = 1;i<n;i++){
		ans = ans|vec[i];
		ans2=ans2&vec[i];
	}
	cout<<ans-ans2<<endl;

}
int main()
{
	ll t = 1;
	cin>>t;
	while (t--)
	{
		solve();
	}
}