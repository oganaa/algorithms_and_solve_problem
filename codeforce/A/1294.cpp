#include<bits/stdc++.h>
using namespace std;

void solve(){
	int arr[3],n;
	float res =  1;
	cin>>arr[0]>>arr[1]>>arr[2]>>n;
	
	sort(arr, arr + 3);
//	arr[2] -=arr[0];
//	arr[1] -=arr[0];
//	arr[0] = 1;
	n-= 2 * arr[2] - arr[1] - arr[0];
	
	if(n%3!=0||n<0){
		cout<<"NO"<<endl;
	}else cout<<"YES"<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}