#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
	ll n,a,b,m;
	cin>>m;
	string s;
	string s1;
	cin>>s>>s1;
	int index = -1;
	int n = s.size();
	for(int i =0;i<s.size();i++){
		if(s[i]!=s1[i]){
			index=i;
		}
	}
	if(index==-1){
		cout<<"YES"<<endl;
		return;
	}
	bool ok = true;
	
	if(s[index]=='B'){
		char current;
		for(int i = index+1;i<n;i++){
			if(s[i]=='W') ok=false;
			if(s1[1]=='B'){
				
			}
		}
	}
	
	
	
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}