#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
	    int n;
		cin>>n;
		int a;
		int arr[2];
		int odd=0;
		for(int i = 0;i<n;i++){
			cin>>a;
			if(a%2==1)odd++;
		}
		cout<<min(odd,n-odd)<<endl;
//		if(odd%2==1) cout<<1<<endl;
//		else cout<<0<<endl;
	  
	}
	
 
 
int main() {
    int t;
    cin >> t;
    while(t--){
    	solve();
	}
 
}