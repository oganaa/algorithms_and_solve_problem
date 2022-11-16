#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int m,s;
	cin>>m>>s;
	
	if(s==0){
		if(m==1){
			cout<<"0 0";
			return ;
		}else {	
			cout<<"-1 -1";
			return ;
		}
	
	}
	string maxi,mini;
	for(int i = 0;i<m;i++){
		int k = min(9,s);
		maxi.push_back('0'+k);
		s = s - k;	
	}
	if(s>0){
		cout<<"-1 -1";
		return ;
	}
	for(int i = m - 1;i>=0;i--){
		mini.push_back(maxi[i]);
	}
		
	
	
	
	int j = 0;
	
	
	while(mini[j]=='0')
		j++;
	
	mini[0]++;
	mini[j]--;
	cout<<mini<<" "<<maxi;
	
		
	
	
}
int main(){
	int t=1;
	while(t--){
		solve();
	}
}