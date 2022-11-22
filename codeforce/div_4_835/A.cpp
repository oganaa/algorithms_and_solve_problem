#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	vector<int> v;
	int a,b,c;
	cin>>a>>b>>c;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(),v.end());
	cout<<v[1]<<endl;
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
