
#include<iostream>
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
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
    
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
 
void solve(){
	


}
int main(){
	long long a[1000000] = {0};
	
	for(long long i =2;i<=1000000;i++){
		if(a[i]==0){
			for(long long  j = 2;i*j<=1000000;j++){
				a[i*j]=1;
			}
		}
		
	}
	long long t=1;
	cin>>t;
	while(t--){
			long long x,sq;
	cin>>x;
	sq = sqrt(x);
	if(x==1) cout<<"NO"<<endl;
	else if(x==sq*sq&& a[sq]==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}
}