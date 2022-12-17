#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
	ll n,a,b,m;
	string s;
	string s1;
	cin>>n;
	cin>>s;
	cin>>s1;
	ll index = -1;
	
	for(int i =0;i<s.size();i++){
		if(s[i]!=s1[i]){
			index=i;
			break;
		}
	}
	if(index==-1){
		cout<<"YES"<<endl;
		return;
	}

	bool ok = true;
	if(s[index]=='B'){
		ll lastIndex=-1;
		bool isDown=false;
		for(int i = index+1;i<n;i++){
			if(s1[i]=='B'&&s[i]=='B'&&!isDown){
				isDown=true;
			}else if(s[i]=='B'&&s1[i]=='W'&&!isDown){
				isDown=false;
			}
			else if(s1[i]=='B'&&s[i]=='B'&&isDown){
				isDown=false;
			}else if(s1[i]=='B'&&s[i]=='W'&&isDown){
				isDown= true;
			}else{
				lastIndex=i;
				break;
			}
		}
		if(lastIndex==-1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}else if(s1[index]=='B'){
		ll lastIndex=-1;
		bool isDown=true;
		for(int i = index+1;i<n;i++){
			if(s1[i]=='B'&&s[i]=='B'&&isDown){
				isDown=false;
			}else if(s1[i]=='B'&&s[i]=='W'&&isDown){
				isDown=true;
			}
			else if(s1[i]=='B'&&s[i]=='B'&&!isDown){
				isDown=true;
			}else if(s[i]=='B'&&s1[i]=='W'&&!isDown){
				isDown= false;
			}else{
//				cout<<"duus"<<endl;
				lastIndex=i;
				break;
			}
		}
		if(lastIndex==-1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
//		cout<<"ans2="<<lastIndex<<endl;
	}else {
		cout<<"NO"<<endl;
	}
	
	
	
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}