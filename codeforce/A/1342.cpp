#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
	ll x,y,a,b;
	cin>>x>>y>>a>>b;

	cout<<min(min(x,y)*b+abs(x-y)*a,a*(x+y))<<endl;
		
	
	
	
}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}	
 
