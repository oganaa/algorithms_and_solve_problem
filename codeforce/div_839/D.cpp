#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	vector<ll> vec(n);
	int before = 0;
	bool isSorted = true;
	bool isSorted2=true;
	int before2= 0;
	for(int i = 0;i<n;i++){
		cin>>vec[i];
		if(vec[i]<before){
			isSorted = false;
		}
		if(vec[i]>before2){
			isSorted2=false;
		}
		before2= vec[i];
		before = vec[i];
	}
	if(isSorted) cout<<"0"<<endl;
	else{
		if(before2){
			
		}else cout<<"-1"<<endl;
	}
}
int main()
{
	ll t = 1;
	cin>>t;
	while (t--)
	{
		solve();
	}
}