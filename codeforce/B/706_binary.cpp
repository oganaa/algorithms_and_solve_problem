#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n,k;
	cin>>n;
	long long shops[n+1];
	for(int i =0;i<n;i++){
		cin>>shops[i];
	}
	sort(shops,shops+n);
	cin>>k;
	while(k--){
		int x;
		cin>>x;
		
		int l = 0,r = n-1;
		while(l<=r){
			int mid = (l+r) / 2;
			if(shops[mid]>x)
				r = mid-1;
			else l  = mid+1;
		}
		
		cout<<l<<endl;
	}
	
	

}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}