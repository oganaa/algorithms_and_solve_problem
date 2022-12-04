#include<bits/stdc++.h>
using namespace std;
# define ll long long 
void solve(){
	string s;
	int l,r ;
	cin>>l>>r;
	
	if(l*2>r){
		cout<<-1<<" "<<-1<<endl;
	}else{
		cout<<l<<" "<<l*2<<endl;
	}
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}