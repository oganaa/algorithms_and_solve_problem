#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;


void permute(int n,vector<int>& nums){
	if(n==nums.size()){
		ans.push_back(nums);
		return;
	}
	for(int i = n ;i<nums.size();i++){
		swap(nums[i],nums[n]);
		permute(n+1,nums);
		swap(nums[i],nums[n]);
	}
	return;
}
void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> vec(n);
	for(int i =0;i<n;i++){
		vec[i] = i+1;
	}
	permute(0,vec);
	
	

	for(int j = 0; j<ans.size();j++){
		for(int i = 0; i<ans[j].size();i++){
			cout<<ans[j][i]<<" ";
		}
		cout<<endl;
	}


		
}
int main(){
	long long t=1;
//	cin>>t;
	while(t--) solve();
}