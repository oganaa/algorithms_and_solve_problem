#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n,m;
	cin>>n>>m;
	vector<string> c(n);
	vector<pair<string,string>> p(m);
	string s1,s2;
	for(int i = 0;i<m;i++){
		cin>>s1>>s2;
		p[i].first= s1;
		p[i].second= s2;
//		p.push_back(make_pair({s1,s2}));
	}
	for(int i = 0;i<n;i++){
		cin>>s1;
		c[i] = s1;
	}
	for(int i = 0;i<n;i++){
		for(int j=0;j<m;j++){
			if(c[i]==p[j].first||c[i]==p[j].second){
				if(p[j].second.size()==p[j].first.size()){
					cout<<p[j].first<<" ";
				}else if(p[j].second.size()>p[j].first.size()){
					cout<<p[j].first<<" ";
				}else{
					cout<<p[j].second<<" ";
				}
			}
		}
		
	}
	cout<<endl;
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}