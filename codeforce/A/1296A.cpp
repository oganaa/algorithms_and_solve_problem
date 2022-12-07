#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	int n,t,sum = 0;
	cin>>n;
	int arr[n+2];
	bool odd = false, even = false;
	for(int i = 1;i<=n;i++){
		cin>>arr[i];
		sum= sum + arr[i];
		odd |= arr[i] % 2 != 0;
		even |= arr[i] % 2 == 0;
	}
	if(sum%2!=0||(odd && even)){
		cout<<"YES"<<endl;
	}else cout<<"NO"<<endl;
}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}	


//