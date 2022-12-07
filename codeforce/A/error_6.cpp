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
		b[i] = arr[i];
	}
	int i = 1;
	while(arr[i]>arr[i+1]){
		i++;
	}
//		i--;
	int j = n ;
	
	while(arr[j]>arr[j-1]){
		j--;
	}

	if(i==j&&j==n){
		cout<<"yes"<<endl;
		cout<<"1 "<<n<<endl;
		continue;
	}
	
	
	
	
	
	sort(arr,arr+n+1);
	for(int i = 1;i<=n;i++){
		if(b[i]!=arr[i]){
			answer++;
			if(answer==1){
				p.first = i;
			}	else {
				p.second = i;
			}
		}
	}
		
	
	if(answer>2){
		cout<<"no"<<endl;
	}else if(answer==2) {
		cout<<"yes"<<endl;
		cout<<p.first<<" "<<p.second<<endl;
	}else{
		cout<<"yes"<<endl;
		cout<<1<<" "<<1<<endl;
	}
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 