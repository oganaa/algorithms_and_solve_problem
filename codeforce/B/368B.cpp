#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
	int n,m,l;
	cin>>n>>m;
	set<int> st;
	vector<int> dp(n),a(n);
	for(int i =0;i<n;i++) cin>>a[i];
	for(int i =n-1;i>=0;i--) {
		st.insert(a[i]);
		dp[i] = st.size();
	}
	while(m--)
    {
        cin>>l;
        cout<<dp[l-1]<<"\n";
    }
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 
