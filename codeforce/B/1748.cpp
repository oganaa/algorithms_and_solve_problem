#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(x) x.begin(),x.end() 
void solve(){
	ll n;
    string s;
    cin>>n>>s;
    ll ans=0;

    for(ll i=0;i<s.size();i++){

        int fr[10]{}, distinct=0, max_freq=0;

        for(ll j=i;j<s.size() && (++fr[s[j]-'0'])<=10;j++){

            max_freq=max(max_freq,fr[s[j]-'0']);
            if(fr[s[j]-'0']==1) distinct++;

            if(distinct>=max_freq) ans++;
        }
    }
    cout<<ans<<'\n';
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
