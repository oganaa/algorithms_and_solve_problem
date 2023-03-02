#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
void solve(){
	string s,t;
	cin>>s>>t;
	if(s.size()==t.size()){
		if(s==t)  cout<<s<<endl;
		else cout<<-1<<endl;
		return ;
	}
	if(s.size()>t.size()) swap(s,t);
	int n = s.size();
	int m = t.size();
	int lcm = (n*m)/gcd(n,m);
	int k = 0;
	string answer="";
	for(int i = 0;i<lcm;i++){
		answer = answer+s[k];
		k++;
		k%=n;
	}
	k = 0;
	for(int i = 0;i<lcm;i++){
		if(answer[i]!=t[k]){
			cout<<"-1"<<endl;
			return;
		}
		k++;
		k%=m;
	}
	cout<<answer<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--) solve();
	
	return 0;
}