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
	}
	if(n==1){
		cout<<"YES"<<endl;
	}else{
		ll down1=0,up1=0;
		int start = -1;
		int up = -1;
		int down =-1;
		for(int i = 1;i<n;i++){
			if(v[i]>v[i-1]){
				if(start==-1){
					start=1;
				}
				if(up==-1){
					up1++;
					up=1;
					down=-1;	
				}
			
			}
			else if(v[i]<v[i-1]){
				if(start==-1){
					start=0;
				}
				if(down==-1){
					down1++;
					up = -1;
					down = 1	;
				}
			}
		}
	
		if(down1==0||up1==0){
			cout<<"YES"<<endl;
		}else if(down1==1&&up1==1&&start==0){
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
	}
	
	

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
