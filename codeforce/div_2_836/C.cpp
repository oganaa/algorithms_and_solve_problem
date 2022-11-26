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
	int a[200005],n,x;
	cin>>n>>x;
	if(n%x!=0){
		cout<<"-1"<<endl;
	}else if(n==x){
		cout<<n<<" ";
        for(int i=2;i<n;i++){
            cout<<i<<" ";
        }
        cout<<1<<endl;
	}else {
		for(int i=2;i<n;i++){
              if(i!=x)
              a[i]=i;
        }
		a[n]=1;
		a[1] = x;
		a[x] = n;
	 for(int i=x+1;i<n;i++){
          if(a[i]%x==0 && a[x]>a[i] && a[x]%i==0){
              cout<<a[i]<<" "<<a[x]<<endl;
			  swap(a[i],a[x]);
              
              x=i;
          }
      }
      for(int i=1;i<=n;i++){
          cout<<a[i]<<" ";
      }
      cout<<endl;
		
		
		
		
	}
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}