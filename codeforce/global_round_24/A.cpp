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
	long long arr[100005]={0},n,x;
	map<int,int> answer;
	cin>>n;
	
	for(int i = 1;i<=n;i++){
		cin>>arr[i];
		answer[arr[i]]++;
	}
//	if(answer.size()==n){
//		cout<<1<<" "<<1<<endl;
//	}else{
		cout<<1<<" "<<n<<endl;
//	}
 
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}