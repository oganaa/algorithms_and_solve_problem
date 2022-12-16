#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	int n,a,b,m;
	cin>>n>>m;
	vector<pair<int,int>> notfriend;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		notfriend.push_back(make_pair(min(x,y),max(x,y)));
	} 
	notfriend.push_back(make_pair(n+1,n+1));
	sort(notfriend.begin(),notfriend.end());
	multiset<int> ms;
	for(auto it:notfriend){
		ms.insert(it.second);
	}
	int j=0;
	int ans =0;
	for(int i = 1;i<=n;i++){
		ans = ans + *ms.begin()-i;
		cout<<*ms.begin()-i<<" ";
		while(j<m&&notfriend[j].first==i){
			ms.erase(ms.find(notfriend[j].second));
			j++;
		}		
	}
	cout<<ans<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}