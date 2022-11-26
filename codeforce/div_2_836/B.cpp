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
	int n;
	cin>>n;
	if(n%2==1){
		for(int i = 0;i<n;i++){
			cout<<1<<" ";
		}
		cout<<endl;
	}else{
		cout<<1<<" "<<3<<" ";
		for(int i = 0;i<n-2;i++){
			cout<<2<<" ";
		}
		cout<<endl;
	}
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}