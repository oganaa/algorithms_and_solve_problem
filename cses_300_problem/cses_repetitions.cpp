#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
	int n,m,l;
	string s;
	cin>>s;
	n = s.size();
	int c=1;
	int mx = 1;
	for(int i = 1;i<n;i++){
		if(s[i]==s[i-1]){
			c++;
			mx=max(c,mx);
		}else {
			c =1;
		}
	}
	cout<<mx;
	
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 
