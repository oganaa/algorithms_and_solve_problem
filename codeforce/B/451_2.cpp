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
	
	
	for(int i = 0;i<n;i++){
		cin>>arr[i];
		b[i] = arr[i];
	}
	
	sort(arr,arr+n);
	int left = -1;
	for(int i = 0;i<n;i++){
		if(arr[i]!=b[i]){
			left = i;
			break;
		}
	}
	int right = -1;
	for(int i =n-1;i>=0;i--){
		if(arr[i]!=b[i]){
			right = i;
			break;
		}
	}
	
	if(right==-1||left==-1){
		cout<<"yes"<<endl;
		cout << 1 << " " << 1 << endl;
	}else {
		int answer = true;
		reverse(arr+left,arr+right+1);
		for(int i =0;i<n;i++){
			if(arr[i]!=b[i]){
				answer = false;
			}
		}
		if(answer){
			cout<<"yes"<<endl;
			cout <<  left+ 1 << " " << right + 1 << endl;
		}else cout<<"no"<<endl;
	}
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 