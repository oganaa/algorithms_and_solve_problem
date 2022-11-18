#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,k=0,s;
	cin>>n>>s;
	vector<ll> per;
	ll arr[55]={0};
	ll maxI = 0;
	for(int i =1;i<=n;i++){
		cin>>m;
		maxI=max(m,maxI);
		arr[m]++;
	}
	
 
	for(int i =1;i<=maxI;i++){
		if(arr[i]==0){
			s=s-i;
		}
	}
 
	if(s<0){
		cout<<"NO"<<endl;
	}else if(s==0) cout<<"YES"<<endl;
	else {
		int i = maxI +1;
		while(s>0){
			s=s-i;
			i++;
		}
		if(s==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
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