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
		vec.push_back(a);
	}
	int ones= 0;
	for(int i = 0;i<n;i++){
		ones = ones + vec[i];
		if(vec[i]) vec[i] = -1;
		else vec[i] = 1;
	}
	if(ones == n){
		cout<<n-1<<endl;
		return ;
	}
	int ans = 0,x=0;
	for(int i = 0;i<n;i++){
		
		x = max(0,x+vec[i]);
		ans = max(ans,x);
		
	}
	cout<<ans+ones<<endl  ;
	
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
