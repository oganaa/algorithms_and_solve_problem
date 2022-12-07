#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,c=0;
	cin>>n;
	vector<int> v(n*2);
	for(int i=0;i<n*2;i++){
		cin>>v[i];	
	}
	vector<int>temp(n,0);
	vector<int> ans;
	for(int i=0;i<n*2;i++){
		if(temp[v[i]-1]==0){
			temp[v[i]-1] = 1;
			ans.push_back(v[i]);
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";	
	}
	cout<<endl;
	
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
