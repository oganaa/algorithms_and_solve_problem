#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	if(n%2020==0||n%2021==0) cout<<"YES"<<endl;
	else{
		while(n>=2020){
			n=n-2021;
			if(n%2020==0||n%2021==0){
				 cout<<"YES"<<endl;
				 return;
			}
		}
		if(n==0)  cout<<"YES"<<endl;
		else  cout<<"NO"<<endl;
		
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
