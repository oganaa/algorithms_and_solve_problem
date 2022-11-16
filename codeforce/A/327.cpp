#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int n;
	cin>>n;
	vector<int> vec;
	for(int i = 0;i<n;i++){
		int a ;
		cin>>a;
		vec.push_back(a);
	}
	int maxElement = 0;
	for(int i =0;i<n;i++){
		int sum = 0;
		for(int j = i;j<n;j++){
			if(vec[j]==1){
				sum = sum + vec[j];	
			}
			
		}
		int sum2 = 0;
		for(int j = 0;j<i;j++){
			if(vec[j]==1) sum2++;
		}
		cout<<sum<<" "<<sum2<<" "<<n-i-sum+sum2<<endl;
		maxElement = (maxElement,max((n-i-sum)+sum2,max(maxElement,sum +sum2)));
	}
	cout<<maxElement;
	
	int ans=0;
}
int main(){
	int t=1;
//	cin>>t;
	
	while(t--){
		solve();
	}
}
