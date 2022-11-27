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
	long long a,b,n,x;
	cin>>x;
        if(x==1) cout <<1<<endl;
        else if (x%2==0){
            a=x;
            b=a;
            for (int i =1;i<=x/2;i++){
                a=a-1;
                b=b+1;
                cout<<a<<" "<<b<<" ";
            }
             cout<<endl;
         }else { 
         		int j = 0;
                int c = x;
                x++;
                int arr[x]={0};
                int d,e;
                a=x;
                b=a;
                for (int i =1;i<=x/2;i++){
                a=a-1;
                b=b+1;
                arr[j]=a;
                j++;
                arr[j]=b;
                j++;
            	}
            	 for( j = 0;j<x;j++){
                	if(arr[j]!=x-1){
                		cout<<++arr[j]<<" ";
					}
				}
            cout<<endl;
         }
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}