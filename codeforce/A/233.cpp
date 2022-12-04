#include<bits/stdc++.h>
using namespace std;
# define ll long long 
void solve(){
	int n;
	cin>>n;
	if(n%2==1){
		cout<<-1<<endl;
	}else {
		int arr[100];
		for(int i = 0;i<n;i++){
			arr[i]=i+1;
		}
		for(int i = 0;i<n;i+=2){
			swap(arr[i],arr[i+1]);
		}
		for(int i = 0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		
		
	}
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}