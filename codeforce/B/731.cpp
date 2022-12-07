#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	int n,t;
	cin>>n>>t;
	vector<int> a(n);
	int answer = 0;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	int right = 0;
	int sum = 0;
	for(int i = 0;i<n;i++){
		while(right<n&&sum + a[right]<=t){
			sum = sum + a[right];
			right++;
		}
		answer = max(answer,right-i);
		sum = sum - a[i];
	}
	cout << answer << '\n';
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 