#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
	int x,y,a,b;
	cin>>x>>y>>a>>b;
	if(x==y){
		cout<<b*(x)<<endl;
	}else{
		if(x>y){
			cout<<a*(x-y)+b*y<<endl;
		}else{
			cout<<a*(y-x)+b*x<<endl;
		}
	}
	
	
}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}	
 
