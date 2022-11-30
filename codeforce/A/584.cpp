#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,t;
	cin>>n>>t;
	if(n==1&&t==10){
		cout<<-1<<endl;
	}else {
		string s="";
		cout<<t;
		if(t==10){
			
			for(int i = 1;i<=n-2;i++){
				cout<<0;
			}
		}
		else{
			for(int i = 1;i<=n-1;i++){
				cout<<0;
			}
		}
		cout<<endl;
	}
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	


//