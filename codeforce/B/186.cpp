#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,i,x=1,m,q;
void solve()
{
	string s="qwertyuiopasdfghjkl;zxcvbnm,./";
	
	char way,k;
	char str;
	cin>>str;
	while(cin>>k){	
		cout<<s[s.find(k)-(str=='R')+(str=='L')];
	}
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 