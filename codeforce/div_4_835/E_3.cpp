
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    long long k=0,zero=0,one=0;
 
    for(long long i=0;i<n;i++){
        if(v[i]==0){
            maxo+=one;
            zero++;
        }
        else{
            one++;
        }
    }
    cout<<m
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