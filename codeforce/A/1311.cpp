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
	long long a,b,n;
	cin>>a>>b;
	if(a==b){
		cout<<0<<endl;
	}else if(a>b&&(a-b)%2==0){
	
		cout<<1<<endl;
	}else if(a<b&&(b-a)%2==1){
		cout<<1<<endl;
	}else cout<<2<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}