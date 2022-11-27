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


int k[51],n,x,m;
bool binary_search(int x){
	int left = 0,right=n-1;
	while(right-left>=0){
		int mid = (left+right)/2;
		if(k[mid]==x) return true;
		else if(k[mid]<x){
			left = mid +1;
		}else{
			right = mid-1;
		}
	}
	return false;
}


void solve(){
	
	cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
	sort(k,k+n);
	
	bool answer = false;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			for(int l = 0;l<n;l++){
		
				if(binary_search(m-k[i]-k[j]-k[l])){
					answer = true;
				}
			}
		}
	}
	if(answer) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}