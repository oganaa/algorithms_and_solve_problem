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
	string str1;
	string str2;	
	
	
	cin>>str1;
	str2 = str1;
	reverse(str2.begin(), str2.end());	
	str1 = str1+str2;
	cout<<str1<<endl; 
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}