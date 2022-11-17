#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
   		int n;              
		cin>>n;
        string s;           
		cin>>s;
 
 
        ll ans=0;
 
        for(int i=0;i<n;i++){		
            vector<int> oron(11,0);
            int dc=0,mxCount=0;
              for(int j=i;j<=min(n-1,i+100);j++){
            	 if(oron[s[j]-'0']==0){
            	 	dc++;
				 }
				 oron[s[j]-'0']++;
			     mxCount=max(mxCount,oron[s[j]-'0']);
			    if(dc>=mxCount){
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
