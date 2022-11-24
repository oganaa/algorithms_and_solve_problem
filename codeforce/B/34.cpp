#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,c=0;
	cin>>n>>m;
	vector<int> v;
	
	for(int i=0;i<n;i++){
		int a; 
		cin>>a;
		v.push_back(a);	
	}
	sort(v.begin(),v.end());
	int sum = 0;
	for(int i = 0;i<m;i++)
	{
		if(v[i]<0 )
		sum =sum + v[i];
	}
	cout<<abs(sum);
	
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
