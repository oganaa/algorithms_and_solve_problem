#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
	int n,a,b,m;
	cin>>n;
	string s;
	cin>>s;
	map<char,int> mp;
	for(int i =0;i<n;i++){
		mp[s[i]]++;
	}
	ll c=(1<<n);
//	cout<<mp['0']<<" "<<mp['1'];
 
	if(mp.size()==1){
		if(mp['0']>0){
				cout<<1<<" ";
		}else{
				cout<<c<<" ";
		}
	}
	else{
	 if(mp[0]==mp[1]){
			a = (1<<mp['1']);
			b = (1<<(mp['0']));
			for(int i=a;i<=c+1-b;i++){
				cout<<i<<" ";
			}
		}
		else{
			a = (1<<mp['1']);
			b = (1<<(mp['0'])-1);
			for(int i=a;i<=c-b;i++){
				cout<<i<<" ";
			}
			cout<<endl;
		}
	}
 
 
	
	
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}