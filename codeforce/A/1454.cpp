#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	int arr[n+1];
	for(int i =1;i<=n-1;i++){
		arr[i] = i+1;
	}
	arr[n] = 1;
	for(int i = 1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}	


//