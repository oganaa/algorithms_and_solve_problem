#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll left,right,x,a,b;
	cin>>left>>right>>x>>a>>b;
	if (a>b)  swap(a,b);
	if(a==b) {
		cout<<0<<endl;
	}else if( (x+a>right&&a-x<left) ||( b+x>right&&b-x<left )){
		cout<<"-1"<<endl;
	}else if (abs(a-b)>=x) {cout<<1<<endl;}
	else if(right-b>=x||a-left>=x){
		cout<<"2"<<endl;
	}else cout<<"3"<<endl;
	
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
