#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll a,b;
	cin>>a>>b;
	ll dif = b-a;
	if(dif==0){
		for(int i = 1;i<=a;i++){
			cout<<i<<" ";
		}
		cout<<endl;
	}else{
		ll ans = 1;
		ll temp = 0;
		ll dindex=0;
		cout<<"1"<<" ";
		for(int i =1;i<=a-1;i++ ){
			if(b-ans-i+1 >=a-i){
				ans = ans + i;
			}else{
				ans++;
			}
			cout<<ans<<" ";
		}
		
//		triangler
//			while(b>=ans+j&&b-(ans+j)>=a-j){
//				ans = ans + j;
//				cout<<temp+ans<<" ";
//				j++;
//			}	
//			temp += ans;
//			dindex +=j;
		
//		cout<<b-ans;
//		for(ll i= j;i<=a;i++){
//			cout<<++ans<<" ";
//		}
		cout<<endl;
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