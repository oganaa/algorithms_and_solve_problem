#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	for(int i = 501;i<=987;i++){
		int a  = i;
			
		int third = a%10; 
		int second = a/10%10;
		int first= a/100;
		
		if(first!=second&&first!=third&&second!=third){
//			cout<<third<<" "<<second<<" "<<first<<endl;
			int answer = i * 2;
			int last = answer%10;
			int t = answer/10%10;
			int s = answer/100%10;
			int f = answer/1000;
			if(last == s&&t==f){
				cout<<i<<" ";
			}
		}
		
	}
}
int main(){
	int t=1;
//	cin>>t;
	
	while(t--){
		solve();
	}
}
