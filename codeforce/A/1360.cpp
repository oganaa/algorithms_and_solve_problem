#include<bits/stdc++.h>
#define ll long long
const int n1=1e9+7;
using namespace std;
int power(int a, int b)
{
	int x = 1;
 
	while (b)
	{
		if (b & 1) x = (x*a);
		a = (a*a);
		b >>= 1;
	}
	return x;
}
void solve()
{
    ll n;
    cin>>n;
    ll ans=((((n*(n+1))%n1)*(4*n-1))%n1*337)%n1;
    cout<<ans<<endl;
}

int main()
{
   
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 
 
}
 