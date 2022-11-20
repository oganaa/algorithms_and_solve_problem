#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll a,b,n;
	cin>>n;
	vector<int>	 v;
	map<int,int> mp;
	for(int i = 0;i<n;i++){
		int c; 
		cin>>c;
		mp[c]++;	
		v.push_back(c);
	
	}
	if(n<=3){
		cout<<n<<endl;
	}else {
		if(n%2==1) cout<<n<<endl;
		else{
			if(mp.size()>2){
				cout<<n<<endl;
			}
			else{
				int ans = 0;
				for(int i = 4;i<=n;i=i+2){
					ans++;
				}
				cout<<n-ans<<endl;
			}
		}
		
		
	}
	
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