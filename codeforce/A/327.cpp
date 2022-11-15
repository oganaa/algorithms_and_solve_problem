#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n,s,s1;
	cin>>n;
	vector<int> vec;
	int maxI = 0;
	for(int i = 0;i<n;i++){
		int a; 
		cin>>a;
		vec.push_back(a);
	}
	int c= 0;
	int startIndex = -1;
	int endIndex = -1;
	int eIndex = -1;
	int rIndex = -1;
	
	
	if(n==1){
		if(vec[0]==1){
			cout<<0;
		}else cout<<1;
	}
	else{
			for(int i = 0;i<n;i++){
		if(vec[i]==0){
			if(startIndex ==-1){
				startIndex = i;
			}
			c++;
		} else{
			if(maxI<c){
				maxI =c;
				if(endIndex==-1){
					endIndex = i;
//					cout<<vec[startIndex-1]<<" "<<vec[endIndex+1]<<" "<<startIndex<<" "<<endIndex<<" ";
					maxI=maxI+vec[startIndex-1]+vec[endIndex];
					startIndex = -1;
		  			endIndex = -1;
				}
				
				
			}
		  	c= 0;	
		
		}
//		cout<<c<<" ";
	}
	
	
	
	cout<<maxI;
		
	}

}
int main(){
	int t=1;
	while(t--){
		solve();
	}
}