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
	int n, m; cin >> n >> m;
    vector<string> s(n);

 		for(int i = 0; i < n; ++i) {
            cin >> s[i];
        }
        int ans = INT_MAX;
        
        for(int i = 0; i < n; ++i) {
            for(int j = i + 1; j < n; ++j) {
                ans = min(ans, cost(s[i], s[j]));
            }
        }
	cout<<ans<<endl;
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