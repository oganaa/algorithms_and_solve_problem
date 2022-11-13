#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,k;
	cin>>n>>k;
	int sum = 0;
	vector<ll> arr;
	for(int i = 0;i<n;i++){
		ll a;
		cin>>a;
		arr.push_back(a);
	} 
	for( int i = 0 ; i <n ; ++i ) {
        ll prev = 1;
		for ( int j = i; j < n ; ++j ) {
            int temp = (arr[j] /__gcd(arr[j],prev)) * prev;
            prev = temp;
            if(temp==k) sum++;
    	}
	}
	cout<<sum;
}
int main()
{
	int t = 1;
	while (t--)
	{
		solve();
	}
}
