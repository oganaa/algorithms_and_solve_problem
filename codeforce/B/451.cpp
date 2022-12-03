#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	int n,t;
	cin>>n;
	int arr[n+1]={0},b[n+1]={0};
	pair<int,int> p;
	int answer = 0;
	for(int i = 1;i<=n;i++){
		cin>>arr[i];
	}
	if(n==1){
		cout<<"yes"<<endl;
		cout<<"1 1"<<endl;
	}else if(n==2){
		cout<<"yes"<<endl;
		if(arr[1]>arr[2]){
			cout<<"1 2"<<endl;
		}else cout<<"1 1"<<endl;
	}
	else {
		int i = 1;
		while(arr[i]<arr[i+1]){
			i++;
		}
//		i--;
		int j = n - 1;
		
		while(arr[j]<arr[j-1]){
			j--;
		}
		if(i>j){
			cout<<"no"<<endl;
		}else {
			cout<<"i="<<i<<endl;
			cout<<"j="<<j<<endl;
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


//