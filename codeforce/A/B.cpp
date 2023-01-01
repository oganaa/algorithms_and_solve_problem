#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
        long long n,m;
        cin>>n>>m;
        long long  a[n];
        long long  b[m];
        long long  sum = 0;
        priority_queue<int, vector<int>, greater<int> > maxquiz;
        for(int i=0;i<n;i++){
    		cin>>a[i];
    		maxquiz.push(a[i]);
        }
        
        for(int i=0;i<m;i++){
        	cin>>b[i];
        	
        }
       for(int i=0; i<m; i++) {   
		   	maxquiz.pop();
        	maxquiz.push(b[i]);
    	}
//    for ( itr = mset.begin(); itr != mset.end(); itr++)
//	  {
//	  	sum = sum +  *itr;
//	  }	
	while(!maxquiz.empty()){
		sum = sum + maxquiz.top();
		maxquiz.pop();
	}
 
  	
    cout<<sum<<endl;
}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}
