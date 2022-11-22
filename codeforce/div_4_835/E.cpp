
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	vector<ll> v,temp;
	unsigned ll a,b,c,sum=0,sum2=0;
	unsigned ll n;
	map<long,long>mp;
	cin>>n;
	for(ll i = 1;i<=n;i++){
		cin>>a;
		mp[a]++;
		v.push_back(a);
	}
	if(mp.size()==1){
		cout<<n-1<<endl;
		return;
	}
	for(int i=0;i<n-1;i++ ){
		for(int j=i+1;j<n;j++ ){
			if(v[i]==1&&v[j]==0){
				sum++;
			}
		}
	}
	for(int i =0;i<n;i++){
		if(v[i]==0){
			v[i]=1;
			break;
		}
	}
	for(int i=0;i<n-1;i++ ){
		for(int j=i+1;j<n;j++ ){
			if(v[i]==1&&v[j]==0){
				sum2++;
			}
		}
	}
	cout<<max(sum2,sum)<<endl;
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