#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	string in;
	int c=0;
	cin>>in;
	char start = 'a';
	for(auto x:in){
		c=c+min(abs(x-start),abs(26-abs(x-start)));
		start =x;
	}
	cout<<c<<endl;
		
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 