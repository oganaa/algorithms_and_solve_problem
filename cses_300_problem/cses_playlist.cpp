#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c= 0;
int main(){
	int n,m,k,temp;
	cin>>n;
	int ans = 0;
	vector<ll> vec(n);
	vector<ll> vec1;
//	map<int,int> mp;]
//  using two pointer 
	deque<ll> de;
	for(int i = 0;i<n;i++){
		cin>>vec[i];
	}
	
	set<int> st;
	int left = 0;
	int right = 0;
	while(left<n&&right<n){
		
		while(right<n && !st.count(vec[right])){
			st.insert(vec[right]);
			ans = max(ans,right-left+1);	
			right++;	
		}
		while(right<n&&st.count(vec[right])){
			st.erase(vec[left]);
			left++;
		}
//		left++;
	}
	

	
	cout<<ans<<endl;
	return 0;
}