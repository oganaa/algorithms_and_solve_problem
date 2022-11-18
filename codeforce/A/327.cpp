#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,k=0;
	cin>>n;
	vector<int> vec;
	for(int i = 0;i<n;i++){
		int a;
		cin>>a;
		if(a==1) k++;
		vec.push_back(a);
	}
	int s = 0;
	int ans = 0;
	for(int i = 0;i<n;i++){
		s = k;
		for(int j = i;j<n;j++)
		{
			if(vec[j]==1) s--;
			else{
				s++;
			}
			ans = max(ans,s);
			
		}
		
	}
	cout<<ans;
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
