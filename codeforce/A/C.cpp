#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    ll m,n;
    cin>>n>>m;
    
    if(m==1||n==m){
    	for(int i = 1;i<=n;i++){
    		cout<<i<<" ";
		}
	}else{
		
		if(n%2==0){
			int j = 1;
			for(int i = n;i>n/2;i--){
				cout<<i<<" "<<j<<" ";
				j++;
			}
		}else{
			int j = 1;
			int i =n;
			for(i = n;i>n/2+1;i--){
				cout<<i<<" "<<j<<" ";
				j++;
			}
			cout<<i;
		}
		
	
	}
  	
    cout<<endl;
}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}
