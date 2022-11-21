#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	bool isLoop=true;
	ll a,b,n,ans = 0;
	cin>>n;
	int arr[143];
	int j = 14;
	if(n%7==0)cout<<n<<endl;
	else{
		int oron =0;
		a=n;
		while(a>0){
			a=a/10;
			oron++;
		}
		if(oron==2){
			int  arr []={14,21,35,42,56,63,70,84,91};
			
			cout<<arr[n/10-1]<<endl;
		}else{
			map<int,int> mp;
//			int j = 1;
			for(int i = 105;i<=994;i=i+7){
				mp[i/10]=i;
			}
			cout<<mp[n/10]<<endl;
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
