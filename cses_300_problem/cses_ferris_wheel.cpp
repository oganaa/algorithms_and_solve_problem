#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c= 0;
int main(){
	int n,m,k,temp;
	cin>>n>>m;
	ll sum = 0;
	ll ans = 0;
	vector<ll> vec(n);
	for(int i = 0;i<n;i++){
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end());
	ll j = n-1;
	ll i = 0;
	while(i<=j){
		if(vec[i]+vec[j]<=m){
			sum++;
			i++;
			j--;
		}else {
			j--;
			sum++;
		}
	}	
	cout<<sum;
	return 0;
}