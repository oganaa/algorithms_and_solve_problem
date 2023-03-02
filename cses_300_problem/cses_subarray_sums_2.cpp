#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	int n,target;
	cin>>n>>target; 
	vector<ll> vec;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		vec.push_back(a);
	}
	int c= 0;
	for(int i = 0;i<(1<<n);i++){
		int sum = 0;
		for(int j = 0;j<n;j++){
			if(i&(1<<j)){
				sum = sum + vec[j];			
			}
		}
		if(sum==target)c++;
	}
	cout<<c;
	return 0;
}