#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int a;
	cin>>a;
	int ans = a;
	cout<<a/2<<endl;
	for(int i = 1;i<=ans/2-1;i++){
		cout<<"2"<<" ";
	}
	if(ans%2==0){
		cout<<"2";
	}else cout<<"3";
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}
