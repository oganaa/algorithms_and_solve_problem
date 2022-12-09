#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
	int n,m,l;
	cin>>n;
	vector<int> a(n),b(n-1),c(n-2);
	int sum = 0;
	for(int i =0;i<n;i++) {
		cin>>a[i];
		sum = sum + a[i];
	}
	int sum1=0;
	for(int i = 0;i<n-1;i++) {
		cin>>b[i];
		sum1 = sum1+b[i];
	}
	int temp= sum-sum1;
	cout<<temp<<endl;
	sum = sum -temp;
	int sum2=0;
	for(int i = 0;i<n-2;i++) {
		cin>>c[i];
		sum2 = sum2+c[i];
	}
	cout<<sum-sum2<<endl;
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 
