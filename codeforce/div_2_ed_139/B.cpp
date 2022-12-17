#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
	ll n,a,b,m;
	cin>>n;
	string s;
 
	cin>>s;
	
		string temp="";
		string second = "";	
		string third="";
		for(int i = 0;i<n-1;i++){
			temp = s.substr(i,2);
			second = s.substr(0,i);
			third= s.substr(i+2);
			size_t found = second.find(temp);
			size_t found1  = third.find(temp);
			if(found != string::npos||found1 != string::npos){
				cout<<"YES"<<endl;
				return;
			}
		}
		cout<<"NO"<<endl;
	
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}