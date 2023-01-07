#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c= 0;
int main(){
	ll n,k;
	cin>>n>>k;
	bool isAns = false;
	ll sum = 0;
	vector<ll> v(n);
	map<ll,ll> mp;
	for(int i = 0;i<n;i++){
		cin>>v[i];
		mp[v[i]]++;
	}
	pair<ll,ll> ans;
	for(auto it=mp.begin();it!=mp.end();it++){
		ll temp = k-it->first; 
		if(mp.count(temp)>0){
			ans.first = it->first;
			ans.second = temp;
			
//			if(ans.first!=	ans.second){
			isAns = true;
			break;
			
			
		}
	}
	
	if(isAns == true){
		if(ans.first==ans.second){
			auto it = find(v.begin(), v.end(), ans.first);
			ll index = it - v.begin();
			v[index] = 0;
			 auto it1 = find(v.begin(), v.end(), ans.first);
			 if (mp[ans.first]>=2) 
			    {
			        ll index2 = it1 - v.begin();
			        cout<<index+1<<" "<<index2+1;
			    }
			    else {
			         cout<<"IMPOSSIBLE"<<endl;
			    }
		}else {
			auto it = find(v.begin(), v.end(), ans.first);
			auto it1 = find(v.begin(), v.end(), ans.second);
			ll index = it - v.begin();
			ll index1 = it1 - v.begin();
			cout<<index+1<<" "<<index1+1<<endl;	
		}
		
	}else cout<<"IMPOSSIBLE"<<endl;
	
	
	return 0;
}	
 
