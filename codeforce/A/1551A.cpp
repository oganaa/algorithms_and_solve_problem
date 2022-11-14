#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	if(n%3==0) 	cout<<n/3<<" "<<n/3<<endl;
	else{
		if(n%3==1){
			cout<<n/3+1<<" "<<n/3<<endl;
		}else{
			
			cout<<n/3<<" "<<n/3+1<<endl;
		
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
