#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	vector<ll> v,temp;
	ll a,b,c;
	ll n;
	map<long,long> mp ;
	cin>>n;
	for(ll i = 1;i<=n;i++){
		cin>>a;
		v.push_back(a);
		temp.push_back(a);
	}
	sort(temp.begin(),temp.end());
	a = temp[n-1];
	b= temp[n-2];
	
		
		for(int i = 0;i<n;i++){
			if(v[i]==a){
				cout<<a-b<<" ";
			}else {
				cout<<v[i]-a<<" ";
			}			
		}	
		cout<<endl;
		return;
	

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
