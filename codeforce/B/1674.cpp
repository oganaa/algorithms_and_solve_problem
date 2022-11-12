#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(x) x.begin(),x.end() 
void solve(){
	ll answer = 0;
	int n;	
	cin>>n;
	vector<ll> vec,vec1;
	for(int i =0;i<n;i++) {
		ll a;
		cin>>a;
		vec.push_back(a);
	}
	ll diff;

	for(int i = 0;i<n-1;i++){
		if(vec[i]!=0){
			diff = vec[i]+vec[i+1];	
			if(diff==0) {
			  answer++;
			  i++; 
			}else{
				vec1.push_back(vec[i]);
			}
		}else{
			vec1.push_back(vec[i]);
		}
	}
	if(vec[n-1]!=0&&vec[n-1]+vec[n-2]==0){
		vec1.push_back(vec[n-1]);
	}
	
	
	for(int i = 0;i<vec1.size();i++){
		cout<<vec1[i]<<" ";
	}
	cout<<endl;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
