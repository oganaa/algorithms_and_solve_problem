#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n,k;
	cin>>n;
    string s="123456789";
	for(int i = 10;i<=n;i++){
		string temp = "";
		int a = i;
		while(a>0){
			temp = temp + to_string(a%10);
			a /=10;
		}
		reverse(temp.begin(), temp.end());
		s = s + temp;
	}
	cout<<s[n-1];
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}