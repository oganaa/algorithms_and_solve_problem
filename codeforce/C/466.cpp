#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
	ll n;
	cin>>n;
	vector<ll> v(n);
	vector<ll> dp(n);
	ll total = 0;
	for(int i = 0;i<n;i++){
		cin>>v[i];
		total+=v[i];
	}
	if(total % 3 !=0){
		cout<<0<<endl;
		return;
	}
 
     
    long long one_third = total/3;
    long long two_third = one_third*2;
    long long one_third_count = 0;
    long long ans = 0;
    long long sum = 0;
	for(int i = 0;i<n-1;i++){
		sum =sum + v[i];
		if(sum == two_third){
			ans = ans + one_third_count;
		}
		if(sum == one_third){
			one_third_count++;
		}
	}
	cout<<ans<<endl;
}
int main()
{
	int t=1;
//	cin>>t;
	while (t--)
		solve();
	return 0;
}