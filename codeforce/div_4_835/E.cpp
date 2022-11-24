
#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll findMax(vector<long long>& a){
	ll k = 0,one = 0,zero=0;
	for(long long i=0;i<a.size();i++){
        if(a[i]==0){
            k+=one;
            zero++;
        }
        else{
            one++;
        }
    }
    return k;
    
}
void solve()
{
	ll n;
	cin>>n;
	ll a[n+2],b[n+2]={0},c[n+2]={0};
	
	for(ll i = 1;i<=n;i++){
		cin>>a[i];
	}
	for(int i = n-1;i<=1;i--){
	 if(a[i+1]==0)
	   {
		   b[i]=b[i+1]+1;
	   }
	   else b[i]=b[i+1];
	}
	for(int i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	
}
int main()
{
	int t = 1;
//	cin>>t;
	while (t--)
	{
		solve();
	}
}