#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,k=0;
	string s;
	cin>>s;
	string str="";
	for(int i = 0;i<=18;i++){
		str= str + "Yes";
	}
  	size_t found = str.find(s);
    if (found != string::npos)
        cout << "YES" << endl;
    else cout<<"NO"<<endl;
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
