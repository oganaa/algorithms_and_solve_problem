#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	int k;
	int a;
	cin>>n>>k;
	set<int> lights ={0,n};
	multiset<int> diff = {n};
	
	for(int i = 0;i<k;i++){
		cin>>a;
		auto it1 = lights.upper_bound(a);
		auto it2 = it1;
		--it2;
	
		diff.erase(diff.find(*it1-*it2));
		diff.insert(a - *it2);
		diff.insert(*it1-a);
		lights.insert(a);
		auto ans = diff.end();
		--ans;
		cout<<*ans<<" ";
	}
	
	return 0;
}