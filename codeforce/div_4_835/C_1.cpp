#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	vector<ll> v,temp;
	ll n,last,second;
	
	map<long,long> mp ;
	cin>>n;
	long long a[n],c[n];
	for(ll i =0;i<n;i++){
		cin>>a[i];	
		c[i] = a[i];
	}
	sort(c,c+n);
	last = c[n-1];
	second = c[n-2];
	for(int i = 0;i<n;i++){
		if(a[i]==last){
			cout<<last-second<<" ";
		}else {
			cout<<a[i]-last<<" ";
		}			
	}	
	cout<<endl;
	
	
	
//	cout<<(--mp.ensd())->first;
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
