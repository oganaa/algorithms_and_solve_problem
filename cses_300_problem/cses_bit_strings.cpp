#include <bits/stdc++.h>
using namespace std;
#define ll long long
 #define MOD 1000000007
void solve()
{
	int n, answer = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        answer *= 2;
        answer %= MOD;
    }
    cout << answer;
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 
