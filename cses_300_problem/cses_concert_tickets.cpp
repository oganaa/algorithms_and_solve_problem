#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c= 0;
int main(){
	int n,m,k;
	cin>>n>>m;
	ll sum = 0;
	multiset<ll> s1;
//	multiset<ll> s2;
	vector<ll> s2;
	ll temp;
	ll ans = 0;
	for(int i = 0;i<n;i++){
		cin>>temp;
		s1.insert(temp);
	}
	for(int i = 0;i<m;i++){
		cin>>temp;
		s2.push_back(temp);
//		s2.insert(temp);
	}
//	}
//	cout<<*s2.lower_bound(75)<<endl; 
	for(int i = 0;i<s2.size();i++){
		
		auto it = s1.upper_bound(s2[i]);
		if (it==s1.begin()){
			cout << -1 << "\n";
		}else { 
			cout << *(--it) << "\n";
			s1.erase(it);
		}
	}
	
	return 0;
}