#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s,s1;
	
	cin>>s>>s1;
	int ans = 0;
	int before = -1;
//	unordered_set <char> charSet ;
	for(int i=0;i<s1.size();i++ ){
		for(int j = 0;j<s.size();j++){
			if(s1[i]==s[j]){
		
				if(i!=0){
					ans = ans + abs(before-j);
					before = j;
				}else{
					before = j;	
				}
//				cout<<ans<<" ";
				
			}
		}
	}
	
	cout<<ans<<endl;
	
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}