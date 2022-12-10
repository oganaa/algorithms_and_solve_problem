#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
	int n,m,l;
	map<int,int> mp;
	cin>>n;
	
	for(int i = 0;i<n;i++){
		int k;
		cin>>k;
		mp[k]++;
	}
	if(mp.size()==0){
		cout<<0<<endl;
		return;
	}
	int ans = 0;
	auto t = --mp.end();
//	cout<<t->second;
	for (auto i = mp.rbegin(); i != mp.rend(); ++i) {
		if(t->second==i->second){
			ans++;
		}else break;
    }
    cout<<ans<<endl;
}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}	
 
