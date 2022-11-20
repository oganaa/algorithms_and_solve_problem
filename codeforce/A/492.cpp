#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	int i = 1;
	int sum = 0;
	int subsum=0;
	while(subsum<n){
		sum = sum + i;
		subsum+=sum;
//		cout<<" "<<subsum;
		i++;
	}
	if(subsum>n){
		i = i-2;
		cout<<i;
	}else{
		cout<<--i;	
	}
		
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