#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	vector<int> v;
	int a,b,c;
	int n;
	string s;
	cin>>n;
	cin>>s;
	string alba="abcdefghijklmnopqrstuvwxyz";
	map<char,int> mp;
	for(int i = 0;i<s.size();i++){
		mp[s[i]]++;
	}
	for(int i =0;i<alba.size();i++){
		if(alba[i]==(--mp.end())->first){
			cout<<i+1<<endl;
			break;
		}
	}
//	cout<<(--mp.ensd())->first;
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
