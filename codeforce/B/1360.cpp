#include<bits/stdc++.h>
using namespace std;
int A[100][100];
void array(int a[][100],int m,int n){
	
}
void solve(){
	long long x,y,n,k;
	cin>>n;
	vector<long long> vec;
//	array(A,4,4);
	for(long long i = 1;i<=n;i++){
		long long a;
		cin>>a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end());
    x=vec[1]-vec[0];
	for(int i =1;i<n;i++){
		x=min(vec[i]-vec[i-1],x);
	}
	cout<<x<<endl;
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}