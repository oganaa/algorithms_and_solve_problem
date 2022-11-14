#include<bits/stdc++.h>
using namespace std;
int A[100][100];
void array(int a[][100],int m,int n){
	
}
void solve(){
	long long x,y,n,k,z,right = LONG_MAX,left =1;
	cin>>n>>k;
	
	 long long  l = 1, r = LONG_MAX;
        while (l <= r) {
            int m = l + (r - l) / 2;
            
            int mk =m- m/n ;
            if (mk == k){
//            	                cout<<mk<<endl;
//                return ;
			}

                
            if (mk < k)
                l = m + 1;

            else
                r = m - 1;
        }	
        cout<<l<<endl;
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}