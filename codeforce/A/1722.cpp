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
	string s;
	cin>>n>>s;
	string str = "Timur";
	set<char> set1;
	set<char> set2;
	for(int i = 0;i<5;i++){
		set1.insert(str[i]);
	}
	for(int i = 0;i<n;i++){
		set2.insert(s[i]);
	}
	if(n==5){
		if(set2==set1){
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
	}else {
		cout<<"NO"<<endl;
	}
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}