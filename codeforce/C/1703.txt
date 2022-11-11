#include<bits/stdc++.h>
using namespace std;
solve(){
	int a[105] = {0};
	int n,len[105]={0};
	string s[105];
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	for(int i = 0;i<n;i++){
		cin>>len[i];
		cin>>s[i];
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<len[i];j++){
		
			if(s[i][j]=='D'){
				if(a[i]==9){
					a[i] = 0;
				}else {
					a[i] = a[i]+1;
				}
			}else {
					if(a[i]==0){
						a[i] = 9;
					}else{
						a[i]= a[i]-1;
					}
				
			}
		}
	}
	
//	int sum = 0;
	for(int i = 0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t>0){
		solve();
		t--;
	}
}