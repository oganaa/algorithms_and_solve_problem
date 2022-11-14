#include<bits/stdc++.h>
using namespace std;
int A[100][100];
void array(int a[][100],int m,int n){
	
}
void solve(){
	long long x,y,n,k,l,z;
	cin>>x;
	long long ans = 1;
	if(x==1) cout<<0<<endl;
	else{
			bool isAnswer = false;
	while(x!=1){
		if(x%6==0){
			x=x/6;
			ans++;
		}else if(x%3==0){
				ans++;
				x=x*2;			
		}else {
			isAnswer = true;
			break;
		}
		
	}
	if(isAnswer)cout<<-1<<endl;
	else cout<<ans-1<<endl;
	}
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}