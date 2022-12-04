#include<bits/stdc++.h>
using namespace std;
# define ll long long 
void solve(){
	string s;
	cin>>s;
	map<char,int> mp;
	for(int i=0;i<s.size();i++){
		mp[s[i]]++;
	}
	if(mp.size()==2){
		if(mp['A']==mp['B']||mp['B']==mp['C']) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}else if(mp.size()==3){
		if(mp['A']+mp['C']==mp['B']){
			cout<<"Yes"<<endl;
		}else cout<<"No"<<endl;
	}else cout<<"No"<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}