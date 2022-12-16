#include <bits/stdc++.h>
using namespace std;
#define ll long long
 #define MOD 1000000007
void solve()
{
	long long a,b,n;
    cin>>n;
    unordered_set<ll> se;
    for(int i =1;i<=n;i++){
    	cin>>a;
    	se.insert(a);
	}
	cout<<se.size();
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 
