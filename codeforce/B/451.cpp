#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = (int) 1e5 + 5;
int a[N], b[N];
void solve() {
  	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	map<int, int> mp;
	sort(b, b + n);
	for (int i = 0; i < n; i++) {
		mp[b[i]] = i;
	}
	for (int i = 0; i < n; i++) {
		a[i] = mp[a[i]];
	}
	int l = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] != i) {
			l = i;
			break;
		}
	}
	int r = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] != i) {
			r = i;
			break;
		}
	}
	if(l==-1||r==-1){
		cout<<"yes"<<endl;
		cout << 1 << " " << 1 << endl;
	}else{
		
		
		reverse(a+l,a+r+1);
		bool answer = true;
		for (int i = 0;i<n;i++){
			if(a[i]!=i){
				answer =false;
			}
		}
		if(answer){
			cout<<"yes"<<endl;
			cout << l + 1 << " " << r + 1 << endl;
		}else cout<<"no"<<endl;
	}
		
		
}

int main() {
  int t=1;
//  cin >> t;
  while (t--) {
    solve();
  }
}