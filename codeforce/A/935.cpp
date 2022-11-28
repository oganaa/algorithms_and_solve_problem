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
	cin>>n;
	string s;
	cin>>s;

	stack<char> st ;
	
	for(int i = 0;i<n;i++){
		if(s[i]=='('){
			st.push('(');
		}else{
			if(st.size()>0&&st.top()=='('){
				st.pop();
			}
		}
	}
		cout<<st.size()<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}