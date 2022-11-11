#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s; 
	cin>>s;
	int n  = s.size();
	string result = "";
	string temp="";
	for(int i = 0 ;i<n;i++){
		if(s[i]=='.'){
			result = result + "0";
		}else{
			if(s[i]==s[i+1]){
				result = result + "2";
			}else {
				result = result + "1";
			}
			i++;
		}
	}
	cout<<result;
}
int main(){
	int t=1;
//	cin>>t;
	while(t--) solve();
}