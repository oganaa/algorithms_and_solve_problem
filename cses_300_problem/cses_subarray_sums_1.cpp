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
//	sort(vec.begin(), vec.end());
	// brute force
	int c = 0;
	for(int i = 0;i<n;i++){
		for(int j = i ;j<n;j++){
			ll sum = 0;
			for(int k = i;k<=j;k++){
				sum = sum + vec[k];
			}
			if(sum==target) c++;
		}	
	}
	cout << c << endl;
	
//	slide window
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	int c= 0;
//	while(i<n){
//		sum = sum + vec[i];
//		while(sum>=target){
//			if(sum==target) c++;
//			sum = sum - vec[j];
//			j++;
//		}
//		i++;
//	}
//	cout<<c;
	return 0;
}