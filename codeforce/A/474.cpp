#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,i,x=1,m,q;
void solve()
{
	string s;
	int n,t;
	cin>>s;
	n = s.size();
	int a[n]={0};
	for(int i = 0;i<n-1;i++){
		if(s[i]==s[i+1]){
			a[i+1] = a[i] +1; 	
		}else {
			a[i+1] = a[i];
		}
	}
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		cout<<a[r-1]-a[l-1]<<endl;
	}
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 #include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,i,x=1,m,q;
void solve()
{
	string s;
	int n,t;
	cin>>s;
	n = s.size();
	int a[n]={0};
	for(int i = 0;i<n-1;i++){
		if(s[i]==s[i+1]){
			a[i+1] = a[i] +1; 	
		}else {
			a[i+1] = a[i];
		}
	}
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		cout<<a[r-1]-a[l-1]<<endl;
	}
}
int main(){
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}	
 