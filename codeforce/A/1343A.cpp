#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
int a;
cin>>a;
int x = 3;
// 6
while(a%x!=0)
{x = 2*x+1;}
cout<<a/x<<"\n";
}
int main()
{
	int t = 1;
	cin>>t;
	while (t--)
	{
		solve();
	}
}
