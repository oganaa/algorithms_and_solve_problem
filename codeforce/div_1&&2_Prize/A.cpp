#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
//	stack<char> st;
//	st.push(s[0]);
	char sum =  s[0];
	for(int i =1;i<n;i++){
		if(s[i]=='0'){
			cout<<"+";
		}else{
			if(sum=='1'){
				cout<<'-';
				sum = '0';
			}else{
				cout<<'+';
				sum='1';
			}
			
		}
	}
	cout<<endl;
//	cout<<sum;
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
