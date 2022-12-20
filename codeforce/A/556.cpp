#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
void solve(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	int maxPos = max_element(v.begin(), v.end()) - v.begin();
    int minPos = min_element(v.begin(), v.end()) - v.begin();
    
    int d1=max(maxPos,minPos)+1;
    int d2=max(n-1-maxPos,n-1-minPos)+1;
    int d3 = (n - minPos )+maxPos+1;
    int d4 = (n-maxPos) + minPos+1;
	cout<<min(d1,min(d2,min(d3,d4)))<<endl;
	
}
int main(){
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}