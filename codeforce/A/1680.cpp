#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cost(string& a, string& b) {
    int val = 0;
    for(int i = 0; i < a.size(); ++i) {
        val += abs(a[i] - b[i]);
    }
    return val;
}
void solve()
{
	int l1,l2,r1,r2;
	cin>>l1>>r1>>l2>>r2;
	
	if(l1==l2){
		cout<<l1<<endl;
	}else cout<<l1+l2<<endl;
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