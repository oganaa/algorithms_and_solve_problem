#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int n;
	cin>>n;
	int ans=0;
	for(int i = 1;i<=9;i++){
		int j = 0;
		int sum =0;
		while(j<4){
			sum = sum * 10+i;
			ans = ans+(j+1);
			if(n==sum){
				i=10;
				break;	
				
			} 
			
			j++;
		}		
	}
	cout<<ans<<endl;
}
int main(){
	int t=1;
	cin>>t;
	
	while(t--){
		solve();
	}
}
