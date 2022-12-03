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
	long long n,arr[105];
	long long bit[31]={0};
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	long long ans = 0;
	for(int i = 0;i<n;i++){
		ans = ans|arr[i];
	}
	cout<<ans<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}
//for (int j = 0; j < i; j++) {
//                    for (int k = 0; k < ans[j].size(); k++)
//                    for (int l = 0; l < ans[i-1-j].size(); l++)
//                        ans[i].push_back("(" + ans[j][k] + ")" + ans[i-1-j][l]);
//                }