#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c= 0;
int main(){
	int n,m,k,temp;
	cin>>n>>k;
	ll sum = 0;
	ll ans = 1;
	vector<int>a(n),b(n);
	for(int i = 0;i<n;i++){
		cin>>temp;
		a[i] = temp-1; 
	}
	for(int i=0;i<n;i++)
    	b[a[i]]=i ;
	for(int i=1;i<n;i++){
		
		if(b[i]<b[i-1]){
			ans++;
		}
	}
	int c = 0;
	int left,right;
	while(k--){
		cin>>left>>right;
		left--;
		right--;
		swap(a[left],a[right]);
		if(b[left]<=b[left-1]&&left-1>=0){
			left++;
		}
		if(b[a]<b[a+1]&&a+1<=n){
			left++;
		}
		
	}
//    	ans+=;
  	cout << ans  ;
	return 0;
}