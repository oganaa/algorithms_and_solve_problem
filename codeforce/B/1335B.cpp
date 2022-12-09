#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,i,x=1,m,q;
void solve()
{
	int n,a,b;
	cin>>n>>a>>b;
	string bStr="";
	int j=0;
	for(char i = 'a';i<='z';i++){
		bStr +=i;
		j++;
		if(j>=b){
			break;
		} 
	}
	string ans = "";
	for(int i = 0;i<n;i++){
		ans = ans + bStr[i%b];
	}
	
	cout<<ans<<endl;
//	for(int i = 0)
}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}	
 