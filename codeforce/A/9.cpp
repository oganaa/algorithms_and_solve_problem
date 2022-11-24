#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	map<string,int> maps;
	for(int i =1;i<=n;i++){
		string s;
		cin>>s;
		maps[s]++;
	}
	int ans = 0;
	string  result = "";
  for (auto it = maps.begin();
         it != maps.end(); ++it){
		 if( it->second>ans){
		 	ans=  it->second;
		 	result = it->first;
		 }
    }cin>>t;
	{
		solve();
	}
}

//