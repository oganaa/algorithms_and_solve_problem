#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,c;
void search(int y) {
	if (y == n) {
		c++;
		return;
	}
	for (int x = 0; x < n; x++) {
		if (r1[x] || r2[x+y] || r3[x-y+n-1]) continue;
			r1[x] = r2[x+y] = r3[x-y+n-1] = 1;
			search(y+1);
			r1[x] = r2[x+y] = r3[x-y+n-1] = 0;
	}
}

void solve(){
	
	cin>>n;
}
int main(){
	int t=1;
	while(t--){
		solve();
	}
}
