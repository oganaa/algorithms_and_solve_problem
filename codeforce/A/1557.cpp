#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	vector<ll> vec(n);
	ll sum = 0;
	for(int i = 0;i<n;i++){
		cin>>vec[i];
		sum = sum + vec[i];
	}
	sort(vec.begin(),vec.end());
	cout << fixed << setprecision(10);
	cout << 1.0 * (sum - vec[n-1]) / (n - 1) +  vec[n-1] << endl;
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
