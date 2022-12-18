#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	if(n>3){
		cout<<n<<endl;
		if(n%2==0){
			for(int i = n-1;i>=1;i=i-2){
				cout<<i<<" ";
			}
			for(int i = n;i>=2;i=i-2){
				cout<<i<<" ";
			}
		}else {
			for(int i = n;i>=1;i=i-2){
				cout<<i<<" ";
			}
			for(int i = n-1;i>=2;i=i-2){
				cout<<i<<" ";
			}
		}
	}
	else if(n==3){
		cout<<2<<endl;
		cout<<"1 3"<<endl;
	}else{
		cout<<1<<endl;
		cout<<1<<endl;
	}
//	string s;
//	cin>>s;

//	cout<<endl;
//	cout<<sum;
}
int main()
{
	ll t = 1;
//	cin>>t;
	while (t--)
	{
		solve();
	}
}
