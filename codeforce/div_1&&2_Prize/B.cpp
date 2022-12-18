#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll a,b,d,c;
	cin>>a>>b>>c>>d;
	bool isAnswer = false;
	if((a<b&&c<d)&&(a<c&&b<d)){
//		isAnswer = true;
		cout<<"YES"<<endl;
		return;
//		cout<<isAnswer<<" ";
	}else{
		bool isAnswer = false;
	
	for(int i =0;i<4;i++){
		if((a<b&&c<d)&&(a<c&&b<d)){
			isAnswer = true;
			break;
		}
		ll a1=a,b1=b,d1=d;
		a = c;
		b = a1;
		d = b1;
		c = d1;
	}

	if(isAnswer){
		cout<<"YES"<<endl;
	}else cout<<"NO"<<endl;
}
	
	
	
}
int main()
{
	ll t = 1;
	cin>>t;
	while (t--)
	{
		solve();
	}
}