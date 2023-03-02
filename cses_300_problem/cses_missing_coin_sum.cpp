#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ll ans = 0;
	int n,middle;
	cin>>n;
	vector<ll> v(n);

	for(int i = 0 ;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());

	ll res= 1;
	for(int i = 0;i<n;i++){
		if(v[i]>res){
			cout<<res<<endl;
			return 0;
		}else{
			res = res + v[i];
		}
	}

	cout<<res;
	return 0;
}