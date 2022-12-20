#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
void solve(){
	int n;
	map<char,int>mp;
	cin>>n;
//	vector<char> v(n);
	string s;
	cin>>s; 
	for(int i = 0;i<s.size();i++){
		mp[s[i]]++;
	}
	cout<<abs(mp['0']-mp['1']);
	
}
int main(){
	ll t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}