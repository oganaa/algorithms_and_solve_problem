#include<bits/stdc++.h>
using namespace std;
int t,n;
string ch;
set<string>s;
string ss[200005];
void solve()
{
		s.clear();
//	scanf("%d",&n);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ss[i];
		s.insert(ss[i]);
	}
	
	for(int i=1;i<=n;i++){
		int flag=1;
		for(int j=1;j<ss[i].size();j++){
			string x=ss[i].substr(0,j); 
			string y=ss[i].substr(j); 
			if(s.find(x)!=s.end()&&s.find(y)!=s.end()){
				cout<<1;
				flag=0;
				break;
			}
		}
		if(flag)	cout<<0;
	}
	printf("\n");
}
int main()
{
	scanf("%d",&t);
	while(t--)	solve();
	return 0;
}