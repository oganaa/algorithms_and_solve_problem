#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return true;
    }
    else {
        return false;
    }
}
 
void solve(){
	long long n,m,ans=1;
	cin>>n>>m;
	if(n==1) cout<<0<<endl;
	else if(n==2) cout<<m<<endl;
	else{
		cout<<m*2<<endl;
	}
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}