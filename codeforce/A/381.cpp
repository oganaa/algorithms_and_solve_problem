#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n;
	cin>>n;
	vector<int> a;
	for(int i =0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
	int cnt[2]={0},l=0,r=n-1;
	for(int i=0;i<n;i++)
	{
		cnt[i%2]+=a[l]>a[r]?a[l++]:a[r--];
	}
	cout<<cnt[0]<<" "<<cnt[1];
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}