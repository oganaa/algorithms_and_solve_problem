#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,c=0;
	cin>>n>>m;
	char ch[n+1][m+1];
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			cin>>ch[i][j];
			if(ch[i][j]=='W'||ch[i][j]=='G'||ch[i][j]=='B'){
				c++;
			}
		}
	}
	
	if(c==n*m) cout<<"#Black&White"<<endl;
	else cout<<"#Color"<<endl;
}
int main()
{
	int t = 1;
//	cin>>t;
	while (t--)
	{
		solve();
	}
}
