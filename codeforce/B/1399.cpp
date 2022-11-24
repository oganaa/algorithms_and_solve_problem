#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,k,n;
	cin >> n;
	vector<int> a(n), b(n);
	for (auto &it : a) cin >> it;
	for (auto &it : b) cin >> it;
	int minorange = *min_element(a.begin(),a.end());
	int minapple = *min_element(b.begin(),b.end());
	long long answer = 0;
	for(int i  = 0;i<n;i++){
		answer += max(a[i]-minorange,b[i]-minapple);
	}
	cout<<answer<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}