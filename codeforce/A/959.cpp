#include<bits/stdc++.h>
using namespace std;
# define ll long long 
void solve(){
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if(a[0]==a[1]&&a[1]==a[2]){
		cout<<"YES"<<endl;
		cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
	}else if(a[2]==a[1]){
		cout<<"YES"<<endl;
		cout<<a[2]<<" "<<a[0]<<" "<<a[0]<<endl;
	}else {
		cout<<"NO"<<endl;;
	}
	
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}