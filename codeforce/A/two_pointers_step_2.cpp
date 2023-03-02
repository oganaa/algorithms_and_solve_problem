#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,i=0,k=0;
	cin>>n>>m;
	int a[n+1]={0},b[m+1]={0},c[m]={0};
	for(int i = 0;i<n;i++) cin>>a[i];
	for(int i = 0;i<m;i++) cin>>b[i];
	
	
	for(int j = 0;j<m;j++){
		while(i<n&&a[i]<b[j]){
			i++;
		}	
		c[j] = i ;
	}
	for(int i = 0;i<m;i++){
		cout<<c[i]<<" ";
	}
}