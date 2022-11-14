#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	int n ; 
	cin>>n;
	vector<int> ans(5,1);
	
	for(int i =2;i<=n;i++){
		for(int i = 3;i>=0;i--){cout<<"i="<<i<<" ";
			ans[i]+=ans[i+1];
			
		}
		cout<<endl;
	}
	int ret = 0;
	for(auto a:ans) ret+=a;
	cout<<ret;
}
int main()
{
	int t = 1;
	while (t--)
	{
		solve();
	}
}
