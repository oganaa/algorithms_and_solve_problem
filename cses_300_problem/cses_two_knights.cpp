#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
	ll n;
	cin>>n;
	
	ll a[100005];
	a[1]=0;
	a[2] = 6;
	a[3] = 28;
	a[4]=96;
	a[5] = 252;
	a[6] = 550;
	a[7] = 1056;
	a[8] = 1848;
//	for(int i = 9;i<=n;i++){
//		ll temp=(i*i)*(i*i-1)/2;
//		ll temp2 = ((i-2)*(i-2)*4)+((i-2)*16) + (4)+(4*3)+((i-4)*12)+(4*2);
//		
//		a[i] = temp-temp2;
//	}
	if(n>=8){
		for(int i = 1;i<=8;i++){
		cout<<a[i]<<endl;
		}
		for(ll i =9;i<=n;i++){
			ll temp=(i*i)*(i*i-1)/2;
			ll temp2 = ((i-4)*(i-4)*4)+((i-4)*20) + 24;
			cout<<temp-(temp2)<<endl;
		}	
	}else {
		for(int i = 1;i<=n;i++){
		cout<<a[i]<<endl;
		}
	}


}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 
