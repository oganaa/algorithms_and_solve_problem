#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x,y,n,m;
	vector<int> males;
	vector<int> females;
	cin>>n;
	for(int i = 0;i<n;i++){
		int a;
		cin>>a;
		males.push_back(a);
		
	}
	cin>>m;
	for(int i = 0;i<m;i++){
		int a;
		cin>>a;
		females.push_back(a);
	}
	sort(males.begin(),males.end());
	sort(females.begin(),females.end());
//
//	int ans  = 0;
//	for(int i = 0;i<n;i++){
//			for(int j=0;j<m;j++){
//				if(abs(males[i]-females[j])<=1){
//					females[j]=1000;
//					ans++;
//					
//					
//					break;
//				}
//			}
//	}
	int ans=0;
	int i = 0,j =0;
	while(i<males.size()||j<females.size()){
//		cout<<" "<<males[i]<<" "<<females[j]<<endl;
		if(abs(males[i]-females[j])<=1){
			ans++;
			i++;
			j++;
		}
		else if(males[i]>females[j]){
			j++;
		}else {
			i++;
		}
		
	}
	cout<<ans<<endl;
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}