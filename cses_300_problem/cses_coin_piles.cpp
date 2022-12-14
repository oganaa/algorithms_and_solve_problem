#include <bits/stdc++.h>
using namespace std;
#define ll long long
 #define MOD 1000000007
void solve()
{
	long long a,b;
    cin>>a>>b;
		if(a<b) swap(a,b)
		if((a+b)%3!=0||a>b*2){
			cout<<"NO"<<endl;
		}else cout<<"YES"<<endl;
}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}	
 
