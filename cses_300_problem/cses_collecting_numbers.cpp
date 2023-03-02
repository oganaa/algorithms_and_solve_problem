#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c= 0;
int main(){
	int n,m,k,temp;
	cin>>n;
	ll sum = 0;
	ll ans = 1;
	unordered_map<int,int> mp;
	for(int i = 0;i<n;i++){
		cin>>temp;
		if(i==0)mp[temp]++;
		else{
			auto it = mp.find(temp+1);
			if(it!=mp.end()){
				ans++;
			}
			mp[temp]++;
		}
	}
	cout<<ans<<endl;
	return 0;
}