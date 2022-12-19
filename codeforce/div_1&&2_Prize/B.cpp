#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,k,a;
	ll c= 0;
	cin>>n>>m>>k;
	vector<int> v(m);
	for(int i = 0;i<m;i++){
		cin>>v[i];
	}
	
	for(auto it : v){
		if((n+k-1)/k<it){
			cout<<"NO"<<endl;
			return ;
		}else if((n+k-1)/k==it&&n%k!=0){
			c++;
		}
	}
	
	
	if(n%k<c){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
  
	return;
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