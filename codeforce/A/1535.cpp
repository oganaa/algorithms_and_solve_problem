#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,k;
	int n=4;
	int array[n+2],array1[n+2];
	for(int i =0;i<n;i++){
		cin>>array[i];
		array1[i] = array[i];
	}
	sort(array,array+n);
	if(array1[3]==array[3]&&array1[2]==array[2]){
		cout<<"NO"<<endl;
	}else if(array1[2]==array[3]&&array1[3]==array[2]){
		cout<<"NO"<<endl;
	}else if(array1[0]==array[3]&&array1[1]==array[2]){
		cout<<"NO"<<endl;
	}else if(array1[1]==array[3]&&array1[0]==array[2]){
		cout<<"NO"<<endl;
	}else {
		cout<<"YES"<<endl;
	}
	
}
int main(){
	long long t=1;
	cin>>t;
	while(t--) solve();
}