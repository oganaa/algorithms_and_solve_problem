
#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll findMax(vector<long long>& a){
	ll k = 0,one = 0,zero=0;
	for(long long i=0;i<a.size();i++){
        if(a[i]==0){
            k+=one;
            zero++;
        }
        else{
            one++;
        }
    }
    return k;
    
}
void solve()
{
long long n;
    cin>>n;
    vector<long long> v(n),zeros(n,0),ones(n,0);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans = findMax(v);
    for(int i = 0;i<n;i++){
    	if(v[i] == 0) {
            v[i] = 1;
            ans = max(ans, findMax(v));
            v[i] = 0;
            break;
        }
	}
   for(int i = n - 1; i >= 0; --i) {
        if(v[i] == 1) {
            v[i] = 0;
            ans = max(ans, findMax(v));
            v[i] = 1;
            break;
        }
    }
	cout<<ans<<endl;
	
    
    
    
}
int main()
{
	int t = 1;
	cin>>t;
	while (t--)
	{
		solve();
	}
}