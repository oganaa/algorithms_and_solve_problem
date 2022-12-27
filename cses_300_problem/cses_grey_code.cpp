#include <bits/stdc++.h>
using namespace std;
#define ll long long
 #define MOD 1000000007
ll g (ll n) {
    return n ^ (n >> 1);
}
void solve()
{
	ll n;
    cin >> n;
    for (int i = 0; i < (1<<n); i++) {
    	int l = g(i);
        for(int j = 0;j<n;j++){
        	if((l&(1<<j))){
        		cout<<"1";
			}else
        	cout<<"0";
		}
		cout<<endl;
    }
    
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 
