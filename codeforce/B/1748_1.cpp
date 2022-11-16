#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   int n;              cin>>n;
        string s;           cin>>s;
 
 
        ll ans=0;
 
        for(int i=0;i<n;i++){
 
            vector<int> ox(11,0);
 
            int dc=0,mx=0;
 
            for(int j=i;j<=min(n-1,i+100);j++){
                if(ox[s[j]-'0']==0){
                    dc++;
                }
                ox[s[j]-'0']++;
                mx=max(mx,ox[s[j]-'0']);
                if(dc>=mx){
                    ans++;
                }
            }
 
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
