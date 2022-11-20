#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	string s;
	cin>>s;
	
	if(s.size()%2==0){
		if(s.substr(0,s.size()/2)==s.substr(s.size()/2)){
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}else {
		cout<<"NO"<<endl;
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