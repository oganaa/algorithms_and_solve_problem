#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll left,right,x,a,b;
	cin>>left>>right>>x>>a>>b;
	
//	cin>>a>>b;
	if(a==b) {
		cout<<0<<endl;
	}else if( (x+a>right&&a-x<left) ||( b+x>right&&b-x<left )){
		cout<<"-1"<<endl;
	}else{
		if((x+a<=right&&x+a<=b)||(b+x<=right&&b+x<=a)){
			cout<<"1"<<endl;
		}else{
			if((b+x<=right)||a+x<=right){
				cout<<"2"<<endl;
			}else{
				cout<<"3"<<endl;
			}
//			cout<<"other"<<endl;	
		}
	}
	
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