#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n,k;
	cin>>n>>k;
	int arr[n+1];
	int dp [n+1];
	
	for(int i = 1;i<=n-1;i++){
		cin>>arr[i];
	}
  
    arr[n] = 1;
    for(int cur = 1; cur <= n; cur += arr[cur]) {
        if(cur == k) {
        	cout<<("YES");        	
			return ; 
		}
    }
    
    cout<<("NO");

}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}