#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	bool isLoop=true;
	ll a,b,n,ans = 0;
	cin>>a>>b>>n;
	while(isLoop){
		if(a>n||b>n){
			isLoop=false;
			break;
		}
		if(a>b)b+=a;
		else a+=b;
		ans++;
	}
	
    cout<<ans<<endl;
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
