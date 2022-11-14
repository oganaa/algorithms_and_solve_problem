#include<bits/stdc++.h>
using namespace std;
int A[100][100];
void array(int a[][100],int m,int n){
	
}
void solve(){
	long long x,y,n,k = 0;
	cin>>n;
	map<int,int> mp;
	
	for(long long i = 1;i<=n;i++){
		long long a;
		cin>>a;
		k=k+a;
		mp[a]++;
	}
	if(mp[1]>0&&mp[2]>0&&k%2==0){
		cout<<"YES"<<endl;
	}
	
	else if((mp[1]==0&&(k/2)%2==0)){
		cout<<"YES"<<endl;
	}	else if((mp[2]==0&&(k)%2==0)){
		cout<<"YES"<<endl;
	} 
	else {
		cout<<"NO"<<endl;
	}
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}