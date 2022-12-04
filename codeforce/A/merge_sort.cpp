#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	long long x,y;
	cin>>x>>y;
//	long long ans[x+y+1];
	vector<ll> a;
	vector<ll> b;
	vector<ll> c(x+y);
	for(int i = 0;i<x;i++){
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	for(int i = 0;i<y;i++){
		int temp;
		cin>>temp;
		b.push_back(temp);
	}
	int i = 0,j=0;
	while(i<a.size()||j<b.size()){
		if (j == b.size() || i < a.size() && a[i] < b[j]){
			c[i+j] = a[i];
			i++;
		}else {
			c[i+j] = b[j];
			j++;
		}
		
	}
	for(int i = 0;i<c.size();i++){
		cout<<c[i]<<" ";
	}
	
	
}
int main(){
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
}	


//