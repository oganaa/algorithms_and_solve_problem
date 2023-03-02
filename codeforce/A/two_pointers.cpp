#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,i=0,k=0,j=0;
	cin>>n>>m;
	int a[n+1]={0},b[m+1]={0},c[n+m]={0};
	for(int i = 0;i<n;i++) cin>>a[i];
	for(int i = 0;i<m;i++) cin>>b[i];
	
	while(i<n||j<m){
		if(j==m||(i<n&&a[i]<b[j])){
			c[k] = a[i];
			i++;
			k++;
		}else{
			c[k] = b[j];
			j++;
			k++;
		}
	}
	for(int i = 0;i<n+m;i++){
		cout<<c[i]<<" ";
	}
}