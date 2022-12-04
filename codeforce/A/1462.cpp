#include<bits/stdc++.h>
using namespace std;
# define ll long long 
void solve(){
	int n ;
	cin>>n;
	vector<ll> a(n);
	vector<ll> ans(n);
	for(int i=0;i<n;i++ ){
	 
		cin>>a[i];
	 
	}
	int left = 0,right= n-1;
	bool l=true;
	for(int i=0;i<n;i++ ){
		if(l){
			ans[i] =a[left];
			left++;
			l=false;
				
		}else {
			ans[i] =a[right];
			right--;
			l =true;
		}
	}
	for(int i=0;i<n;i++ ){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}