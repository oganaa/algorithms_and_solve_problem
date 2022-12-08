#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[1000004],i,x=1,m,q;
void solve()
{
	int n,t;
	cin>>n;

	for( i = 1;i<=n;i++){
		cin>>q;
		while(q--){
			a[x]=i;
			x++;
		}
	}
	cin>>m;
    while(m--)
    cin>>q,cout<<a[q]<<endl;
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 