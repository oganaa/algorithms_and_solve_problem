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
	long long a,b,n,ans=1;
	cin>>a;
	b = a;
	int j = 2;
	while(j<=a/2){
		if((b-j)%j==0) ans++;
		j++;
	}
	cout<<ans;
	
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}